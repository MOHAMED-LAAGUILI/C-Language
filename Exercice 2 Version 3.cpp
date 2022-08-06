// Contrôle continu N°2
// Exercice 2 version 3

#include<stdio.h>
#include<conio.h>
#include<locale.h>

char vs[15], ve, tv;
int pap;

float L1, L2, L3;
float T1, T2, T3;
float R1, R2, R3;
float C1, C2, C3;

main()
{
	setlocale(LC_ALL,"fra");	
	printf("\n\n\t\t\t\t\t Application d'envoi d'invitation :");

    printf("\n\n\n\t >> Entrer La Ville de sortie : ");
    scanf("%s",&vs);
    printf("\n\n\t >> Entrer La Ville d'entreés : ");
    scanf("%s",&ve);
    printf("\n\n\t >> Entrer Le Type de véhicule : ");
    scanf("%s",&tv);
    
    if (( tv == 'A' && ve == 'L' ) || ( tv == 'a' && ve == 'l' )){
    	L1 = 30;
    printf("\n\t >> Le prix à payer C'est : %.2f DH", L1);
    
	}else  if (( tv == 'B' && ve == 'L' ) || ( tv == 'b' && ve == 'l' )){
		L2 = 35;
    printf("\n\t >> Le prix à payer C'est : %.2f DH", L2);
    
    }else  if (( tv == 'C' && ve == 'L' ) || ( tv == 'c' && ve == 'l' )){
    	 L3 = 40;
    printf("\n\t >> Le prix à payer C'est : %.2f DH", L3);
    
	}else  if (( tv == 'A' && ve == 'T' ) || ( tv == 'a' && ve == 't' )){
		T1 = 60;
    printf("\n\t >> Le prix à payer C'est : %.2f DH", T1);
    
   	}else  if (( tv == 'B' && ve == 'T' ) || ( tv == 'b' && ve == 't' )){
   		T2 = 70;
    printf("\n\t >> Le prix à payer C'est : %.2f DH", T2);
    
	}else  if (( tv == 'C' && ve == 'T' ) || ( tv == 'c' && ve == 't' )){
		 T3 = 85;
    printf("\n\t >> Le prix à payer C'est : %.2f DH", T3);
    
    }else  if (( tv == 'A' && ve == 'R' ) || ( tv == 'a' && ve == 'r' )){
    	R1 = 10;
    printf("\n\t >> Le prix à payer C'est : %.2f DH", R1);
    
    }else  if (( tv == 'B' && ve == 'R' ) || ( tv == 'b' && ve == 'r' )){
    	R2 = 15;
    printf("\n\t >> Le prix à payer C'est : %.2f DH", R2);
    
    }else  if (( tv == 'C' && ve == 'R' ) || ( tv == 'c' && ve == 'r' )){
    	R3 = 20;
    printf("\n\t >> Le prix à payer C'est : %.2f DH", R3);
    
    }else  if (( tv == 'A' && ve == 'C' ) || ( tv == 'a' && ve == 'c' )){
    	C1 = 40;
    printf("\n\t >> Le prix a payer C'est : %.2f DH", C1);
    
    }else  if (( tv == 'B' && ve == 'C' ) || ( tv == 'b' && ve == 'c' )){
    	C2 = 50;
    printf("\n\t >> Le prix à payer C'est : %.2f DH", C2);
    
   	}else  if (( tv == 'C' && ve == 'C' ) || ( tv == 'c' && ve == 'c' )){
   		C3 = 65;
    printf("\n\t >> Le prix à payer C'est : %.2f DH", C3);
    
	}else
	
	
	
	getch();
	return 0;
}  
// MOHAMED LAAGUILI
