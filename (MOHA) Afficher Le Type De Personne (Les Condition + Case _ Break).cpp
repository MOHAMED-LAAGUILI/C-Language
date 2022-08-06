#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

float age;
int ni;
char cp[15];
main()
{
	setlocale(LC_ALL,"fra");	
	printf("\n\n\t\t\t Programme De Type de personne :");

    printf("\n\n\n\t >> Entrer L'age : ");
    scanf("%f",&age);
    
    if ( age <= 5 )
    ni = 1;
    else if ( age <= 18 )
    ni = 2;
    else if ( age <= 30 )
	ni = 3;
	else if ( age <= 60 )
	ni = 4;
	else
	ni = 5;
	
	switch(ni){
	case 1:
	strcpy(cp,"Poussin");
	break;
	case 2:
	strcpy(cp,"Enfant");
	break;
	case 3:
	strcpy(cp,"Jeune");
	break;
	case 4:
	strcpy(cp,"Personne active");
	break;
	case 5:
	strcpy(cp,"Personne ages");
	break;
		}
		printf("La resultat : %s", cp);
	
	
	getch();
}  
// MOHAMED LAAGUILI
