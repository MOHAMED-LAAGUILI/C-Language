#include <clocale>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
//#include <wchar.h>
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
typedef struct patient
	                   {
                           char cin[12],nom[15],prn[15],adr[20],tel[12],sex[20],dn[12];
	                   }PERS;
PERS p;
/******************************************************************************
/***********************Les pointeurs de fichiers *****************************
/******************************************************************************/
FILE *fp,*fn;
/******************************************************************************
/*********************Fonction interface d'une patien ***********************
/******************************************************************************/
 
void interfacepatient()
{
		system("cls");
		gotoxy (24,5);
		printf("Fiche medicale du patient ");
        gotoxy (10,9);
		printf("CIN du patient    :  ");
		gotoxy (10,13);
		printf("Nom du patient    :  ");
		gotoxy (10,17);
		printf("Prénom du patient : ");
		gotoxy (10,21);
		printf("Adresse du patient: ");
		gotoxy (10,25);
		printf("Téléphone         :"  );
		gotoxy (10,29);
		printf("Date de naissance : ");
		gotoxy (10,33);
		printf("Sexe du patient   : ");
		
}
/******************************************************************************
/*********************Fonction enregistrer patient ***********************
/******************************************************************************/
void enregistrerpatient(){

	int ch1,ch2;
	do
    {
    	system("cls");
	   	interfacepatient();
	  	gotoxy(30,9);gets(p.cin);//scanf("%s",p.cin);
	    gotoxy(30,13);gets(p.nom);//scanf("%s",p.nom);
	    gotoxy(30,17);gets(p.prn);//scanf("%s",p.prn);
	    gotoxy(30,21);gets(p.adr);//scanf("%s",p.adr);
	    gotoxy(30,25);gets(p.tel);//;scanf("%s",p.tel);
	    gotoxy(30,29);gets(p.dn);//scanf("%s",p.age);
	    gotoxy(30,33);gets(p.sex);//scanf("%s",p.sex);
	    fflush(stdin);
       	gotoxy(30,37);
	   	printf("Voulez vous enregistrer ce patient o/n?:");
	   	ch1=getch();
	   	if (toupper(ch1)=='O')
       	{
		 	fp=fopen("d:\\patient.don","a");
		 	fwrite(&p,sizeof(p),1,fp);
		 	fclose(fp);
	  	}
	  	gotoxy(30,41);
      	printf("voulez vous ajouter un autre patient  o/n?:");
	  	ch2=getch();
	}while(toupper(ch2)=='O');

 } 
 
 /*******************************************************************************/
/***************************** Rechercher***************************************/
/*******************************************************************************/
void rechercherpatient(){
	  char cinp[12];
      bool tr=false;
      system("cls");
	  gotoxy(20,3);printf("Numéro du patient à rechercher :     ");
	  gotoxy(56,3);scanf("%s",cinp);
	  fp=fopen("d:\\patient.don","r");
	  if(fp==NULL)
      { 
         gotoxy(22,12);printf("Fichier introuvable!!!");
      }
	  else
      {
	      do
          {
	         fread(&p,sizeof(p),1,fp);
	         if(!feof(fp))
             if (strcmp(cinp,p.cin)==0)
             {
	            interfacepatient();
	               gotoxy(30,9);printf("%s",p.cin);//puts(p.cin);
	              gotoxy(30,13);printf("%s",p.nom);
	              gotoxy(30,17);printf("%s",p.prn);
	              gotoxy(30,21);printf("%s",p.adr);
	               gotoxy(30,25);printf("%s",p.tel);
	              gotoxy(30,29);printf("%s",p.dn);
	               gotoxy(30,33);printf("%s",p.sex);
	            tr=true;
	            //break;
             }
       }while (!feof(fp)&&(strcmp(cinp,p.cin)!=0));//while (!feof(fp));
	   if (tr==false)
       {
		  gotoxy(22,37);printf("Pas de patient avec ce Numéro!!!");
	   }
    }
    gotoxy(15,41);printf("Taper une touche pour revenir au menu principal  ");
    getch();
}
    
 /*******************************************************************************/
/*************************** Fonction Supprimer ********************************/
/*******************************************************************************/

void supprimerpatient(){
   int rep,ch1;
   char c[12];
   bool tr=false;
   do{
	//tr=0;
	system("cls");
       gotoxy(10,5);
	   fp=fopen("d:\\patient.don","r");
	   printf("Numéro de la carte d'idendité du patient à supprimer :");
	   scanf("%s",c);
       fn=fopen("d:\\newpatient.don","w");
       fclose(fn);
        if(fp!=NULL)
        {
          while(!feof(fp))
          {
             fread(&p,sizeof(p),1,fp);
             if (strcmp(c,p.cin)!=0)
             {
               if(!feof(fp)){               	
               	 fn=fopen("d:\\newpatient.don","a");
               	 fwrite(&p,sizeof(p),1,fn);
         	   	 fclose(fn);      	 
			   }
                   
             }
               else 
               {
                	interfacepatient();
	               	gotoxy(30,9);printf("%s",p.cin);//puts(p.cin);
	              	gotoxy(30,13);printf("%s",p.nom);
	              	gotoxy(30,17);printf("%s",p.prn);
	              	gotoxy(30,21);printf("%s",p.adr);
	               	gotoxy(30,25);printf("%s",p.tel);
	              	gotoxy(30,29);printf("%s",p.dn);
	               	gotoxy(30,33);printf("%s",p.sex);
	            	tr=true;
             	}
          }
	   fclose(fp);
	   if(tr==true)
       {
          gotoxy(15,35);printf("Etes-vous sûr de  supprimer ce patient o/n?:");
          ch1=getch();
	      if (toupper(ch1)=='O'){
             remove("d:\\patient.don");
	         rename("d:\\newpatient.don","d:\\patient.don");
	         gotoxy(15,35);printf("                                                ");
       	     gotoxy(15,35);printf("Le patient est bien supprimé!");
             //getch();
          }
	      else remove("d:\\newpatient.don");
       }
       else{
            remove("d:\\newpatient.don");
             gotoxy(15,35);printf("                                                ");
	        gotoxy(15,35);printf("Numéro introuvable!");
	        getch();
       }
        gotoxy(15,35);printf("                                                ");
	   gotoxy(15,35);printf("Autre patient à supprimer o/n?:");
	   rep=getch();
    }
    else{
    	gotoxy(15,35);printf("                                                ");
    	gotoxy(15,35);printf("Fichier introuvable!");
	}
	}while(toupper(rep)=='O');
   }
  /*******************************************************************************/
/**************************** Fonction Modifier *********************************/
/*****************************************************************************/

void modifierpatient()
{

   int pos,ln,q,tr=0;
   char ncp[12];
   do{
      system("cls");
     gotoxy(30,3);printf(" Modifier le patient");
     gotoxy(16,6);printf("Numéro du patient à modifier :     ");
     gotoxy(50,6);scanf("%s",ncp);
     fp=fopen("d:\\patient.don","r");
     if(fp==NULL)
     { 
                 gotoxy(22,9);
                 printf("Fichier introuvable!!!");
     }
     else
     {
       do{
          pos=ftell(fp);
          fread(&p,sizeof(p),1,fp);
	      if (strcmp(ncp,p.cin)==0)
          {
	         	interfacepatient();
	            gotoxy(30,9);printf("%s",p.cin);//puts(p.cin);
	            gotoxy(30,13);printf("%s",p.nom);
	            gotoxy(30,17);printf("%s",p.prn);
	            gotoxy(30,21);printf("%s",p.adr);
	            gotoxy(30,25);printf("%s",p.tel);
	            gotoxy(30,29);printf("%s",p.dn);
	            gotoxy(30,33);printf("%s",p.sex);
              	tr=1;
       		}
		}while (!feof(fp)&&(strcmp(ncp,p.cin)!=0));
		fclose(fp);
		if (tr==0){
	   		gotoxy(16,9);printf("Pas de patient avec ce Numéro!!!");
		}
		else{	    
	    	do{
              gotoxy(16,37); printf("Numéro de la ligne à modifier:");
              scanf("%d",&ln);
	          switch(ln)
              {
		             case 1 :gotoxy(30,9);printf("                                ");gotoxy(30,9);scanf("%s",p.cin);gotoxy(30,13);break;
		             case 2 :gotoxy(30,13);printf("                                ");gotoxy(30,13);scanf("%s",p.nom);gotoxy(30,17);break;
		             case 3 :gotoxy(30,17);printf("                                ");gotoxy(30,17);scanf("%s",p.prn);gotoxy(30,21);break;
		             case 4 :gotoxy(30,21);printf("                                ");gotoxy(30,21);scanf("%s",p.adr);gotoxy(30,25);break;
		             case 5 :gotoxy(30,25);printf("                                ");gotoxy(30,25);scanf("%s",p.tel);gotoxy(30,29);break;
		             case 6 :gotoxy(30,29);printf("                                ");gotoxy(30,29);scanf("%s",p.dn);gotoxy(30,33);break;
		             case 7 :gotoxy(30,33);printf("                                ");gotoxy(30,33);scanf("%s",p.sex);gotoxy(30,9);break;
               }
               gotoxy(16,37); printf("                                                      ");
               gotoxy(16,37); printf("Autre ligne à modifier o/n:");
               q=getch();
	     	}while(toupper(q)=='O');
	     	gotoxy(16,37); printf("                                                          ");
         	gotoxy(16,37); printf("Voulez vous vraiment modifier cet enregistrement o/n?");
         	q=getch();
         	if(toupper(q)=='O')
         	{
            	fp=fopen("d:\\patient.don","r+");
            	fseek(fp,pos,0);
            	fwrite(&p,sizeof(p),1,fp);
            	fclose(fp);
         	}
        }
      }
         gotoxy(16,37); printf("                                                          ");
         gotoxy(16,37); printf("modifier un autre enregistrement o/n?:");
         q=getch();
     }while(toupper(q)=='O');
    }
  /***********************Fonction lister les patients **************************
/******************************************************************************/
  void listerPatient()
{ 
      system("cls");
      int i=0;
	  gotoxy(29,5);
      printf("La liste des patients");
	  gotoxy(4,8);
      printf("CIN Patient");
	  gotoxy(19,8);
      printf("Nom Patient");
	  gotoxy(34,8);
      printf("Prénom patient");
	  gotoxy(52,8);
      printf("Date naissance");
	  gotoxy(70,8);
      printf("sex patient");
	  fp=fopen("d:\\patient.don","r");
	  do
      {
	     fread(&p,sizeof(p),1,fp);
	     if(!feof(fp))
         {
	                   i++;
	                   gotoxy(6,8+i*2); printf("%s",p.cin);
	                   gotoxy(24,8+i*2);printf("%s",p.nom);
	                   gotoxy(39,8+i*2);printf("%s",p.prn);
	                   gotoxy(52,8+i*2);printf("%s",p.dn);
	                   gotoxy(70,8+i*2);printf("%s",p.sex);}
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
			system("cls") ;
			gotoxy(35,3);
			puts(" **< Menu Pincipal >**");
			gotoxy(10,6);
			puts("Le patient");
			gotoxy(10,9);
			puts("1: <*Enregister*>");
			gotoxy(10,12);
			puts("2: <*Rechercher*> ");
			gotoxy(10,15);
			puts("3: <* Lister   *>");
			gotoxy(10,18);
			puts("4: <* Modifier *>");
			gotoxy(10,21);
			puts("5: <*Supprimer *> ");
			gotoxy(40,6);
			puts("Deuxième Menu ");
			gotoxy(40,9);
			puts("6: <*Enregister*>");
			gotoxy(40,12);
			puts("7: <*Rechercher*>");
			gotoxy(40,15);
			puts("8: <* Lister   *>");
			gotoxy(40,18);
			puts("9: <* Modifier *>");
			gotoxy(40,21);
			puts("10:<*Supprimer *> ");
			gotoxy(70,6);
			puts(" Quitter l'application");
		    gotoxy(70,9);
			puts("11:<* Quitter  *>");			
			do
			{
				gotoxy(15,30);
				puts(" Entrer votre choix :");
				gotoxy(36,30);
				puts("                     ");
				gotoxy(36,30);
				scanf("%d",&nm);fflush(stdin);
			}while((nm<1)||(nm>11));
			switch(nm)
			{
				case 1:enregistrerpatient();break;
				case 2:rechercherpatient();break;
				case 3:listerPatient();break;
				case 4:modifierpatient();break;
			    case 5:supprimerpatient();break;
			    case 6:/*enregistrermenu2();*/break;
			    case 7:/*recherchermenu2();*/break;	
				case 8:/*listermenu2();*/break;
				case 9:/*modifiermenu2();*/break;
			    case 10:/*supprimermenu2();*/;		    
			}
		} while(nm!=11);
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
