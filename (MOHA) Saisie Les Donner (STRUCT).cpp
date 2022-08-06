#include<stdio.h>
#include<conio.h>
#include<string.h>

//METHODE 1
typedef struct personne{
	char Numero[20],
	Nom[20],
	Prenom[20];
	int Age;
	float Taille;
}per;

main(){
	
	//Permet de METHODE 1
	per p;
	
	printf("Entrer le Numero : ");
	scanf("%s",p.Numero);
	printf("Entrer le Nom : ");
	scanf("%s",p.Nom);
	printf("Entrer le Prenom : ");
	scanf("%s",p.Prenom);
	printf("Entrer l'age : ");
	scanf("%d",&p.Age);
	printf("Entrer la Taille de Personne : ");
	scanf("%f",&p.Taille);
	
	getch();
}

