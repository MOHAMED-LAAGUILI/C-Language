// Contrôle continu N°2
// Exercice 2 version 1

#include<stdio.h>
#include<conio.h>
#include<locale.h>

char vs[15], ve, tv;
int pap;

float L1 = 30, L2 = 35, L3 = 40;
float T1 = 60, T2 = 70, T3 = 85;
float R1 = 10, R2 = 15, R3 = 20;
float C1 = 40, C2 = 50, C3 = 65;

main()
{
	setlocale(LC_ALL,"fra");	
	printf("\n\t\t\t Application d'envoi d'invitation :");

    printf("\n\n\t >> Entrer La Ville de sortie : ");
    scanf("%s",&vs);
    printf("\n\n\t >> Entrer La Ville d'entreés : ");
    scanf("%s",&ve);
    printf("\n\n\t >> Entrer Le Type de véhicule : ");
    scanf("%s",&tv);
    
    if (( tv == 'A' && ve == 'L' ) || ( tv == 'a' && ve == 'l' )){
    printf("\n\t >> Le prix à payer C'est : %.2f DH", L1);
    
	}else  if (( tv == 'B' && ve == 'L' ) || ( tv == 'b' && ve == 'l' )){
    printf("\n\t >> Le prix à payer C'est : %.2f DH", L2);
    
    }else  if (( tv == 'C' && ve == 'L' ) || ( tv == 'c' && ve == 'l' )){
    printf("\n\t >> Le prix à payer C'est : %.2f DH", L3);
    
	}else  if (( tv == 'A' && ve == 'T' ) || ( tv == 'a' && ve == 't' )){
    printf("\n\t >> Le prix à payer C'est : %.2f DH", T1);
    
   	}else  if (( tv == 'B' && ve == 'T' ) || ( tv == 'b' && ve == 't' )){
    printf("\n\t >> Le prix à payer C'est : %.2f DH", T2);
    
	}else  if (( tv == 'C' && ve == 'T' ) || ( tv == 'c' && ve == 't' )){
    printf("\n\t >> Le prix à payer C'est : %.2f DH", T3);
    
    }else  if (( tv == 'A' && ve == 'R' ) || ( tv == 'a' && ve == 'r' )){
    printf("\n\t >> Le prix à payer C'est : %.2f DH", R1);
    
    }else  if (( tv == 'B' && ve == 'R' ) || ( tv == 'b' && ve == 'r' )){
    printf("\n\t >> Le prix à payer C'est : %.2f DH", R2);
    
    }else  if (( tv == 'C' && ve == 'R' ) || ( tv == 'c' && ve == 'r' )){
    printf("\n\t >> Le prix à payer C'est : %.2f DH", R3);
    
    }else  if (( tv == 'A' && ve == 'C' ) || ( tv == 'a' && ve == 'c' )){
    printf("\n\t >> Le prix a payer C'est : %.2f DH", C1);
    
    }else  if (( tv == 'B' && ve == 'C' ) || ( tv == 'b' && ve == 'c' )){
    printf("\n\t >> Le prix à payer C'est : %.2f DH", C2);
    
   	}else  if (( tv == 'C' && ve == 'C' ) || ( tv == 'c' && ve == 'c' )){
    printf("\n\t >> Le prix à payer C'est : %.2f DH", C3);
    
	}else
	printf("\n\t >> vous avez inséré une mauvaise information.");
	
	
	getch();
	return 0;
}  
// MOHAMED LAAGUILI
