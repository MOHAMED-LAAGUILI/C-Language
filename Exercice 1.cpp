// Contrôle continu N°2
// Exercice 1

#include<stdio.h>
#include<conio.h>
#include<locale.h>

char nf[30], ad[30], sf;

main()
{
	setlocale(LC_CTYPE,"fra");	
	printf("\n\t\t Programme D'invitation :");

    printf("\n\n\t >> Entrer Le nom de la femme : ");
    scanf("%s",&nf);
    printf("\n\n\t >> Entrer L'adresse de la femme : ");
    scanf("%s",&ad);
    printf("\n\n\t >> Entrer La Situation familiale : ");
    scanf("%s",&sf);
    
    if ( sf == 'M' || sf == 'm' ){
    printf("\n\t >> A madame : %s \n\t %s", nf, ad);
    }else if ( sf == 'C' || sf == 'c' ){
    printf("\n\t >> A mademoiselle : %s \n\t %s", nf, ad);
	}
	getch();
}  
// MOHAMED LAAGUILI
