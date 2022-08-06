
//////////////////////////////////////// MOHAMEDLAAGUILI //////////////////////////////
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<locale.h>
#include<stdlib.h>

int i,j;
char ch[20];
float ie;


typedef struct BonAvoir{
	char nba[15],dba[20],ma[20];
	float mba,mr,md;
	
}Avoir;
	Avoir av[7];	
	void gotoxy(int x,int y)
		{
     COORD pos={x,y};
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	}

	void Interface(){
		gotoxy(50,2);
		printf("Bon d'avoir");
		gotoxy(10,6);
		printf("Numéro du bon d'avoir  :");
		gotoxy(10,8);
		printf("Date du bon d'avoir    :");
		gotoxy(10,10);
		printf("Motif de l'avoir       :");
		gotoxy(10,12);	
		printf("Montant du bon d'avoir :");
		gotoxy(10,14);		
		printf("Montant à déduire      :");
	}
	
	void Saisie_Interface(){
		for(i=0;i<7;i++){
		gotoxy(35,6);
		scanf("%s",av[i].nba);
		gotoxy(35,8);
		scanf("%s",av[i].dba);
		gotoxy(35,10);
		scanf("%s",av[i].ma);
		gotoxy(35,12);
		scanf("%f",&av[i].mba);
		av[i].md =av[i].mba * 0.0120;
		av[i].mr=av[i].mba - av[i].md;
		gotoxy(35,14);
		printf("%.2f", av[i].md);
		gotoxy(10,16);
		printf("Montant retourner      : %.2f", av[i].mr);
		gotoxy(5,20);
		printf("Click sur un touch pour ajouter un autre Bon d'avoir.....");				
		getch();
		gotoxy(35,6);
		printf("                          ");
		gotoxy(35,8);
		printf("                          ");
		gotoxy(35,10);
		printf("                          ");
		gotoxy(35,12);
		printf("                          ");
		gotoxy(35,14);
		printf("                          ");
		gotoxy(35,16);
		printf("                          ");	
		}gotoxy(5,20);
		printf("                                                                 ");
		gotoxy(5,22);
		printf("Click sur un touch pour trier.....");
		getch();
		system("cls");
	}
	
	void trier(Avoir av[]){
	for(i=0;i<6;i++){
		for(j=i+1;j<7;j++){
			if(av[i].mr < av[j].mr){
				strcpy(ch, av[i].nba);
				strcpy(av[i].nba,av[j].nba);
				strcpy(av[j].nba,ch);
				
				strcpy(ch, av[i].dba);
				strcpy(av[i].dba,av[j].dba);
				strcpy(av[j].dba,ch);
				
				strcpy(ch, av[i].ma);
				strcpy(av[i].ma,av[j].ma);
				strcpy(av[j].ma,ch);
				
				ie=av[i].mba;
				av[i].mba=av[j].mba;
				av[j].mba=ie;
				
				ie=av[i].md;
				av[i].md=av[j].md;
				av[j].md=ie;
				
				ie=av[i].mr;
				av[i].mr=av[j].mr;
				av[j].mr=ie;	
			                     }
			             }
			       }
}
void lister(Avoir av[]){
	system("cls");
	gotoxy(50,2);
	printf("Affichage bon d'avoir Trier");
	gotoxy(2,5);
	printf("Numéro");
	gotoxy(15,5);
	printf("Date");
	gotoxy(35,5);
	printf("Mt bon avoir");
	gotoxy(50,5);
	printf("Mt déduire");
	gotoxy(65,5);
	printf("Mt retourner");
	gotoxy(2,6);
	printf("_____________________________________________________________________");
	for(int i=0;i<7;i++)
	{
		gotoxy(2,7+2*i);
		printf("%s", av[i].nba);
		gotoxy(15,7+2*i);
		printf("%s", av[i].dba);
		gotoxy(35,7+2*i);
		printf("%.2f", av[i].mba);
		gotoxy(50,7+2*i);
		printf("%.2f", av[i].md);
		gotoxy(65,7+2*i);
		printf("%.2f", av[i].mr);
		 
	}
	}

main()
{
	setlocale(LC_CTYPE,"fra");
	Interface();
	Saisie_Interface();
	trier(av);
	lister(av);
	getch();
}

