// Contrôle continu N°2
// Exercice 3 Version 1

#include<stdio.h>
#include<conio.h>
#include<locale.h>

float tmpe;

main()
{
	setlocale(LC_ALL,"fra");	
	printf("\n\n\t\t\t Programme Calcul Température de l'eau :");

    printf("\n\n\n\t >> Entrer Température de l'eau : ");
    scanf("%f",&tmpe);

	if ( tmpe <= 0 ){
	printf("\n\t >> GLACE ");
	
	}else if ( tmpe > 0  && tmpe < 100 ){
	printf("\n\t >> LIQUIDE ");
	
	}else{
	printf("\n\t >> VAPEUR ");
	}
	
	getch();
	return 0;
}  
// MOHAMED LAAGUILI
