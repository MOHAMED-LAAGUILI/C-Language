#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>	

	float v1, v2;

	void ECHANGE(float &a, float &b){ // & qui Fix en adresse au Variable referencé
		float e;
		e = a; // ve recoit la valeur de la variable referencé par a
		a = b; // referencé par a recoit la valeurde la variable referencé b
		b = e; // la variable referencé par b recoit la valeur de variable e
	}


int main(){
			
	printf("\n Les Variables avant l'échange ");
	printf("\nEntrez La valeur 1 : ");
	scanf("%f",&v1);
	printf("\n Entrez La valeur 2 : ");
	scanf("%f",&v2);
	printf("\n Les Variables aprés l'échange ");
	ECHANGE(v1,v2);
	printf("\n Valeur 1 = %.1f  \n Valeur 2 = %.1f ", v1, v2);
	
	getch();
}
 

