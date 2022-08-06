// Contrôle continu N°2
// Exercice 2 version 2

#include<stdio.h>
#include<conio.h>
#include<locale.h>

char vs[15], ve, tv;
float pap;

main()
{
	setlocale(LC_ALL,"fra");	
	printf("\n\t\t\t Programme D'invitation :");

    printf("\n\n\t >> Entrer La Ville de sortie : ");
    scanf("%s",&vs);
    printf("\n\n\t >> Entrer La Ville d'entreés : ");
    scanf("%s",&ve);
    printf("\n\n\t >> Entrer Le Type de  véhicule : ");
    scanf("%s",&tv);
    
    
    if ( ve == 'L' || ve == 'l'){
	switch (tv){
   	case 'A':
   		pap = 30;
   	break;
	case 'a':
   		pap = 30;
   	break;
   	 	case 'B':
   		pap = 35;
   	break;
   	 	case 'b':
   		pap = 35;
   	break;
   	 	case 'C':
   		pap = 40;
   	break;
   	 	case 'c':
   		pap = 40;
   	break;
   	default:
   	printf("\n\t >> Le Prix a payer c'est : %.2f DH", pap);
   		}
   		printf("\n\t >> Le Prix a payer c'est : %.2f DH", pap);
 }
 
    else if ( ve == 'T' || ve == 't'){
	switch (tv){
   	case 'A':
   		pap = 60;
   	break;
	case 'a':
   		pap = 60;
   	break;
   	 	case 'B':
   		pap = 70;
   	break;
   	 	case 'b':
   		pap = 70;
   	break;
   	 	case 'C':
   		pap = 85;
   	break;
   	 	case 'c':
   		pap = 85;
   	break;
   	default:
   	printf("\n\t >> Le Prix a payer c'est : %.2f DH", pap);
   		}
   		printf("\n\t >> Le Prix a payer c'est : %.2f DH", pap);
 }
 
    else if ( ve == 'R' || ve == 'r'){
	switch (tv){
   	case 'A':
   		pap = 10;
   	break;
	case 'a':
   		pap = 10;
   	break;
   	 	case 'B':
   		pap = 15;
   	break;
   	 	case 'b':
   		pap = 15;
   	break;
   	 	case 'C':
   		pap = 20;
   	break;
   	 	case 'c':
   		pap = 20;
   	break;
   	default:
   	printf("\n\t >> Le Prix a payer c'est : %.2f DH", pap);
   		}
   		printf("\n\t >> Le Prix a payer c'est : %.2f DH", pap);
 }
 else if ( ve == 'R' || ve == 'r'){
	switch (tv){
   	case 'A':
   		pap = 40;
   	break;
	case 'a':
   		pap = 40;
   	break;
   	 	case 'B':
   		pap = 50;
   	break;
   	 	case 'b':
   		pap = 50;
   	break;
   	 	case 'C':
   		pap = 65;
   	break;
   	 	case 'c':
   		pap = 65;
   	break;
   	default:
   	printf("\n\t >> Le Prix a payer c'est : %.2f DH", pap);
   		}
   		printf("\n\t >> Le Prix a payer c'est : %.2f DH", pap);
}
	getch();
}  
// MOHAMED LAAGUILI
