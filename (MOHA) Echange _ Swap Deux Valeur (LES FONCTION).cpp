#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>	

	float v1, v2;

	void ECHANGE(float &a, float &b){ // & qui Fix en adresse au Variable referenc�
		float e;
		e = a; // ve recoit la valeur de la variable referenc� par a
		a = b; // referenc� par a recoit la valeurde la variable referenc� b
		b = e; // la variable referenc� par b recoit la valeur de variable e
	}


int main(){
			
	printf("\n Les Variables avant l'�change ");
	printf("\nEntrez La valeur 1 : ");
	scanf("%f",&v1);
	printf("\n Entrez La valeur 2 : ");
	scanf("%f",&v2);
	printf("\n Les Variables apr�s l'�change ");
	ECHANGE(v1,v2);
	printf("\n Valeur 1 = %.1f  \n Valeur 2 = %.1f ", v1, v2);
	
	getch();
}
 

