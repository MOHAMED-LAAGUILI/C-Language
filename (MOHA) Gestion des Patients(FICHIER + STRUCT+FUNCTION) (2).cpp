#include <locale>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>

/******************************************************************************
/****************************Fonction gotoxy **********************************
/******************************************************************************/
void gotoxy(int x,int y)
{
  COORD pos={x,y};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}  
/******************************************************************************
/***********************Les structures *****************************
/******************************************************************************/
typedef struct etudients
	                   {
                           char cne[12],nom[15],prn[15],adr[20],tel[12],date_n[20];
	                       
	                   }ETUD;
ETUD e;
/******************************************************************************
/***********************Les pointeurs de fichiers *****************************
/******************************************************************************/
FILE *fp;


/******************************************************************************
/*********************Fonction interface d'une personne ***********************
/******************************************************************************/
void interfaceEtudiant()
{
		system("cls");
		gotoxy (24,5);
		printf("Information sur l'etudient'");
        gotoxy (10,9);
		printf("CNE etudient   : ");
		gotoxy (10,13);
		printf("Nom etudient   :  ");
		gotoxy (10,17);
		printf("Prénom etudient: ");
		gotoxy (10,21);
		printf("Adresse        : ");
		gotoxy (10,25);
		printf("Télephone      : "  );
		gotoxy (10,29);
		printf("Date naissance : ");
}
/******************************************************************************
/*********************Fonction enregistrer une Etudiant ***********************
/******************************************************************************/
void enregistrerEtudiant(){
	int ch1,ch2;
	do
    {
	   interfaceEtudiant();
	   gotoxy(26,9);scanf("%s",e.cne);
	   gotoxy(26,13);scanf("%s",e.nom);
	   gotoxy(26,17);scanf("%s",e.prn);
	   gotoxy(26,21);scanf("%s",e.adr);
	   gotoxy(26,25);scanf("%s",e.tel);
	   gotoxy(26,29);scanf("%s",e.date_n);
	   gotoxy(10,33);
	   printf("                                                 ");
       gotoxy(10,33);
	   printf("voulez vous enregistrer o/n?:");
	   ch1=getch();
	   if (toupper(ch1)=='O')
       {
		 fp=fopen("etudients.don","a");
		 fwrite(&e,sizeof(e),1,fp);
		 fclose(fp);
	  }
	  gotoxy(10,33);
      printf("voulez vous ajouter une autre etudient  o/n?:");
	  ch2=getch();
	  }while(toupper(ch2)=='O');
 } 


/***********************Fonction lister les Etudiants **************************
/******************************************************************************/
void listerEtudiant()
{ 
      system("cls");
      int i=0;
	  gotoxy(29,5);
      printf("La liste des etudients");
	  gotoxy(4,8);
      printf("CNE etudient");
	  gotoxy(23,8);
      printf("Les noms");
	  gotoxy(36,8);
      printf("Prenoms");
	  gotoxy(46,8);
      printf("Adresses");
	  gotoxy(60,8);
      printf("Telephone");
	  gotoxy(72,8);
      printf("Date Naissance");
	  fp=fopen("etudients.don","r");
	  do
      {
	     fread(&e,sizeof(e),1,fp);
	     if(!feof(fp))
         {
	                   i++;
	                   gotoxy(6,8+i*2); printf("%s",e.cne);
	                   gotoxy(24,8+i*2);printf("%s",e.nom);
	                   gotoxy(37,8+i*2);printf("%s",e.prn);
	                   gotoxy(47,8+i*2);printf("%s",e.adr);
	                   gotoxy(60,8+i*2);printf("%s",e.tel);
	                   gotoxy(72,8+i*2);printf("%s",e.date_n);}
      }while(!feof(fp));
	  fclose(fp);
	  gotoxy(10,12+i*2);
      printf("Taper une touche pour revenir au menu principal : ");
	  gotoxy(60,12+i*2);
	  getch();
}

/******************************************************************************
/************************Fonction menu principal ******************************
/******************************************************************************/
void menu()
 {
	int nm;
	do
		{
			system("cls");
			gotoxy(32,5);
			puts("Menu principal");
			gotoxy(8,7);
			puts("Les etudients");
			gotoxy(5,8);
			puts("1: Enregister");
			gotoxy(5,9);
			puts("2: Lister");

			do
			{
				gotoxy(10,15);
				puts("Entrer votre choix :");
				gotoxy(30,15);
				scanf("%d",&nm);fflush(stdin);
			}while((nm<1)||(nm>16));
			switch(nm)
			{
				case 1:enregistrerEtudiant();break;
				case 2:listerEtudiant();break;
			}
		} while(nm!=3);
 }
 /******************************************************************************
/*********************Fonction principale main() ***********************
/******************************************************************************/
main()
{
	system("cls");
    setlocale( LC_CTYPE , "fra" ) ;
	menu();
}
