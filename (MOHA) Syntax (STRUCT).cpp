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
}p1,p2; // You have The Choice To Choose Many Variable

//METHODE 2
typedef struct personne{
	char Numero[20],
	Nom[20],
	Prenom[20];
	int Age;
	float Taille;
};

//METHODE 3
typedef struct personne{
	char Numero[20],
	Nom[20],
	Prenom[20];
	int Age;
	float Taille;
}per;

	
main(){
	//Permet de METHODE 1
	//p1
	strcpy(p1.Numero,"A001");
	strcpy(p1.Nom,"MOHAMED");
	strcpy(p1.Numero,"lAAGUILI");
	p1.Age = 21;
	p1.Taille =178;
	//p2
	strcpy(p2.Numero,"A001");
	strcpy(p2.Nom,"MOHAMED");
	strcpy(p2.Numero,"lAAGUILI");
	p2.Age = 21;
	p2.Taille =178;
	//p3
	strcpy(p3.Numero,"A001");
	strcpy(p3.Nom,"MOHAMED");
	strcpy(p3.Numero,"lAAGUILI");
	p3.Age = 21;
	p3.Taille =178;
	
	//Permet de METHODE 2
	struct personne p1;
	
	strcpy(p.Numero,"A001");
	strcpy(p.Nom,"MOHAMED");
	strcpy(p.Numero,"lAAGUILI");
	p.Age = 21;
	p.Taille =178;
	
	
	//Permet de METHODE 3
	per p;
	
	strcpy(p.Numero,"A001");
	strcpy(p.Nom,"MOHAMED");
	strcpy(p.Numero,"lAAGUILI");
	p.Age = 21;
	p.Taille =178;
	
	
	getch();
}
