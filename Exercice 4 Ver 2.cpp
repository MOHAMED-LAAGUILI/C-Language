// Contrôle continu N°2
// Exercice 4 Version 2

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int nb1, nb5, nb10, argent;	

main()
{
	setlocale(LC_ALL,"fra");		
	printf("\n\n\t\t\t Programme Calcul Des Billet(s) $ : ");
	
	printf("\n\n\t >> Etrer un somme d'argent (0-100) : ");
	scanf("%d",&argent);

	nb10 = argent/10;
	argent = argent%10;

	nb5 = argent/5;
	argent = argent%5;

	nb1 = argent/1;
	argent = argent%1;
	
	if ( argent >= 0 && argent <= 100){
		printf("\n\t >> Il faut %d billet(s) de 10 $ \n\t >> Il faut %d billet(s) de 5 $ \n\t >> Il faut %d piece(s) de 1 $ ", nb10, nb5, nb1);
	}
	else{
		printf("vous avez inséré une mauvaise Argent.");
	}
	getch();
	return 0;

}
// MOHAMED LAAGUILI
