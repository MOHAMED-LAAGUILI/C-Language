#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<windows.h>
main(int argc, char** argv)
{
	setlocale(LC_CTYPE,"fra");
	float r,a,b,c;
	printf("\n\n\t\t\t calcul d'un rapport");
	printf("\n\n\t Entrer la valeur de a:");
	scanf("%f",&a);
	printf("\n\n\t Entrer la valeur de b:");
	scanf("%f",&b);
	printf("\n\n\t Entrer la valeur de c:");
	scanf("%f",&c);
	r=(a-b)/(c+3);
	printf("\n\n\t Résultat du rapport est:%f",r);
	return 0;
}

