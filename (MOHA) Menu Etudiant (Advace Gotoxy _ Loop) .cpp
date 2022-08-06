#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<windows.h>
#include<stdlib.h>
void gotoxy(int x,int y)
{
	COORD m={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
}
main()
{
	int choix,ch,i,j,nbre=0;
	char nume[15][12],nome[15][12],prn[15][12],dtn[15][12],ne[12];
	setlocale(LC_CTYPE,"fra");
	do
	{
		gotoxy(22,3);
		printf("Menu générale: Gestion des étudiants");
		gotoxy(10,6);
		printf("1 : Ajouter étudiant");
		gotoxy(10,9);
		printf("2 : Rechercher étudiant");
		gotoxy(10,12);
		printf("3 : Lister étudiant");
		gotoxy(10,15);
		printf("4 : Quitter l'application");
		gotoxy(10,18);
		printf("Entrer votre choix :");
		scanf("%d",&choix);
		switch(choix)
		{
			case 1: system("Cls");
					gotoxy(33,3);
					printf("Ajouter étudiant");
					gotoxy(10,6);
					printf("Numéro étudiant   :");
					gotoxy(10,9);
					printf("Nom étudiant      :");
					gotoxy(10,12);
					printf("Prénom étudiant   :");
					gotoxy(10,15);
					printf("Date de naissance :");
					do
					{
						gotoxy(30,6);
						scanf("%s",nume[nbre]);
						gotoxy(30,9);
						scanf("%s",nome[nbre]);
						gotoxy(30,12);
						scanf("%s",prn[nbre]);
						gotoxy(30,15);
						scanf("%s",dtn[nbre]);
						gotoxy(15,18);
						printf("Autre étudiant O/N? :");
						ch=getch();
						gotoxy(30,6);
						printf("                      ");
						gotoxy(30,9);
						printf("                      ");
						gotoxy(30,12);
						printf("                      ");
						gotoxy(30,15);
						printf("                       ");
						gotoxy(15,18);
						printf("                        ");
						nbre++;
					}while(toupper(ch)=='O');break;
			case 2:system("cls");
					gotoxy(29,3);
					printf("Recherche d'un étudiant");
					gotoxy(10,6);
					printf("Numéro de l'étudiant à rechercher:");
					scanf("%s",ne);
					for(i=0;i<nbre;i++)
					{
						if(strcmp(nume[i],ne)==0)
						{
							gotoxy(10,6);
							printf("                                              ");
							gotoxy(10,6);
							printf("Numéro étudiant   :%s",nume[i]);
							gotoxy(10,9);
							printf("Nom étudiant      :%s",nome[i]);
							gotoxy(10,12);
							printf("Prénom étudiant   :%s",prn[i]);
							gotoxy(10,15);
							printf("Date de naissance :%s",dtn[i]);
						}
					}
					gotoxy(15,9+3*i);
					printf("Appuyer sur une touche pour revenir au menu principale...");
					getch();
					system("cls");        
					break;
			case 3:system("cls");
					gotoxy(31,3);
					printf("Liste des étudiants");
					gotoxy(6,6);
					printf("Numéro");
					gotoxy(21,6);
					printf("Nom");
					gotoxy(36,6);
					printf("Prénom");
					gotoxy(51,6);
					printf("Naissance");
					for(i=0;i<nbre;i++)
					{
						gotoxy(8,9+3*i);
						printf("%s",nume[i]);
						gotoxy(23,9+3*i);
						printf("%s",nome[i]);
						gotoxy(38,9+3*i);
						printf("%s",prn[i]);
						gotoxy(53,9+3*i);
						printf("%s",dtn[i]);
					}
					gotoxy(15,9+3*i);
					printf("Appuyer sur une touche pour continuer...");
					getch();
					system("cls");        
					break;
			case 4: exit(0);
		}
		
	}while(choix!=  4);	
	getch();
}
