#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<locale.h>
	
	char ref[20], nvol[20], nomv[20], des[20];
	float pap;
	
	
void gotoxy(int x, int y)
{
	COORD m={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
}

	void Affichage()
	{
		gotoxy(35,3);
		puts("Aéropot de depart");
		gotoxy(25,6);
		puts("Réference reservation : ");
		gotoxy(25,8);
		puts("Numero de vol         : ");
		gotoxy(25,10);
		puts("Nom de voyageur       : ");
		gotoxy(25,12);
		puts("Destination           : ");
		gotoxy(25,14);
		puts("Montant A payer       : ");
	}
	
	void Lire()
	{
		gotoxy(49,6);
		fflush(stdin);
		gets(ref);
		gotoxy(49,8);
		fflush(stdin);
		gets(nvol);
		gotoxy(49,10);
		fflush(stdin);
		gets(nomv);
		gotoxy(49,12);
		fflush(stdin);
		gets(des);
	}
	
	float CalculMontant(char d[])
	{
		float m=0;
		if(strcmp(des,"Londres")==0){
			m = 1500;
		}else if(strcmp(des,"New York")==0){
			m = 2750;
		} else if(strcmp(des,"Luxembourg")==0){
			m = 600;
		}
		return m;
	}
	
	
main(){
	
	setlocale(LC_ALL,"fra");
	Affichage();
	Lire();
//	pap = CalculMontant(des);  			  // Method 1
//  printf("%.2f DH", pap);   			  // Method 1

	gotoxy(50,14);
	printf("%.2f DH", CalculMontant(des)); // Method 2
	
	getch();
}
