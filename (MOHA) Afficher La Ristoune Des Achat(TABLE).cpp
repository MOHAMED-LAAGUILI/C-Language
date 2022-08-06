#include<stdio.h>
#include<string.h> 
#include<conio.h>

main()
{
	char tc[20], nc[15];
	float va, gr;
		
	printf("\t\n >>> Entrer Le Nom De Client :");
	scanf("%s", nc);
	printf("\t\n >>> Entrer Le Type De Client :");
	scanf("%s", tc);
	printf("\t\n >>> Entrer La Valeur D'achat :");
	scanf("%f",&va);
	
	if(va >= 50000 && strcmp(tc,"grossiste")==0){
		gr = va * 0.03;
	}else if(va >= 10000 && strcmp(tc,"grossiste")==0){
		gr = va * 0.02;
	}else if(va >= 3000 && strcmp(tc,"detaillant")==0){
		gr = va * 0.015;
	}else
		gr = va * 0;
	
	printf("\t\n La Grossiste : %.3f", gr);
	
	
	getch();
	return 0;

}
// MOAHMED LAAGUILI	
