#include <stdio.h>
#include <conio.h>

	
	
	
	float v1, v2;

	void ZERO(float &a){
		a = 0;
	}


int main(){
			
	printf("\nEntrez La valeur 1 : ");
	scanf("%f",&v1);
	printf("\n Entrez La valeur 2 : ");
	scanf("%f",&v2);
	ZERO(v1);
	ZERO(v2);
	printf("\n Valeur 1 = %.1f  \n Valeur 2 = %.1f ", v1, v2);
	
	getch();
}
 

