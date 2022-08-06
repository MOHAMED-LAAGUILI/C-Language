/// Les bibliothèque
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
/// File
FILE *fpt,*fn;
/////////////////////////////////////// Structure Time
struct tm *dtdeb, *dtfin;
/////////////////////////////////////// Variable Globale
	int gn,choix,i,j,n,rn = rand();
	char ch[4],njr[25],idjr[25],idjm[25];
	int dfh, dfm, dfs,hd,md,sd,hf,mf,sf;
/////////////////////////////////////// Structures
typedef struct GestionJoueur{
	char idj[12],nomj[15],prnj[15],gnrj[12];
	float agej;
}Joueur;
Joueur gj;
	
typedef struct TraitmentJeux{
	char id[25],nom[25];
	int score,niv,statue,point,durh,durm,durs;
}Jeux;
Jeux tj;
/////////////////////////////////////// Cordination XY
void gotoxy(int x,int y)
{
     COORD pos={x,y};
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
/////////////////////////////////////// Function Windows Time

void TimeDebut()
{
	time_t t = time(NULL);
	dtdeb = localtime(&t);
	hd = dtdeb->tm_hour;
    md = dtdeb->tm_min;
    sd = dtdeb->tm_sec;
    gotoxy(3,10);
	printf("Heure début");
	gotoxy(2,11);
	printf("_____________");
	gotoxy(4,12);
	printf("%d:%d:%ds",hd, md, sd);
	gotoxy(4,13);
	printf("---------");
}
void TimeFin()
{
	time_t t = time(NULL);
	dtfin = localtime(&t);
   	hf = dtfin->tm_hour;
   	mf = dtfin->tm_min;
  	sf = dtfin->tm_sec;
	if(sf < sd){
		sf = sf + 60;
		mf = mf - 1;
	}
	if(mf< md){
		mf = mf + 60;
		hf = hf - 1;
	}
	if(hf < hd){
		dfh = 24 - hd + hf;
	}else{
	dfh =  hf -hd;
	}
	dfm = mf - md;
	dfs = sf - sd;
}
void Time()
{
	time_t t = time(NULL);
	dtdeb = localtime(&t);
	gotoxy(3,2);
	printf("%d/%d/%d", dtdeb->tm_mday, dtdeb->tm_mon+1,dtdeb->tm_year+1900);
	gotoxy(3,3);
	printf("---------");
}
/////////////////////////////////////// Function Menu Principal
void MainMenu()
 {
    system("cls");
    Time();
	gotoxy(20,1);
    printf("|----------------------------------------|");
	gotoxy(23,2);
    printf(">>>> Jeu des Nombres Mystérieux <<<<");
    gotoxy(20,3);
    printf("|----------------------------------------|");
    gotoxy(5,8);
    printf("Fichier des Joueur :");
    gotoxy(5,9);
    printf("_____________________");
    gotoxy(10,11);
    printf("1: Ajouter un joueur");
    gotoxy(10,13);
    printf("2: Listé les joueur");
    gotoxy(10,15);
    printf("3: Nombres des Joueur");
    gotoxy(10,17);
    printf("4: Rechercher un Joueur");
    gotoxy(10,19);
    printf("5: Modifier un joueur");
    gotoxy(10,21);
    printf("6: Supprimer un Joueur");
    gotoxy(45,8);
    printf("Traitement Joueur :");
    gotoxy(45,9);
    printf("_____________________");
    gotoxy(50,11);
    printf("7: Jeu Niveau Simple");
    gotoxy(50,13);
    printf("8: Jeu Niveau Difficile");
    gotoxy(50,15);
    printf("9: Score des Joueurs");
    gotoxy(50,17);
    printf("0: Quitter le Programme");
    gotoxy(20,24);
    printf("Seléctionner une option : ");
}
/////////////////////////////////////// Function Interface Saisie Ficher
void InterfaceSaisie(){
	system("cls");
	gotoxy(20,2);
        puts("|--------------------------------------------|");
		gotoxy(20,3);
		puts("|");
		gotoxy(28,3);
	    printf("Informations sur les Joueur");
		gotoxy(65,3);
		puts("|");
		gotoxy(20,4);
        puts("|--------------------------------------------|");
	gotoxy(10,10);
	printf("IDENTIFICATEUR :");
	gotoxy(10,12);
	printf("Nom Joueur     :");
	gotoxy(10,14);
	printf("Prénom Joueur  :");
	gotoxy(10,16);
	printf("Sexe Joueur    :");
	gotoxy(10,18);
    printf("Age de Joueur  :"); 
}
/////////////////////////////////////// Saisie Fichier
void Lecture(){
	int rep;
	char idjv[25];
	bool bl = false;
	do
     {
		system("cls");
		InterfaceSaisie();
		gotoxy(27,10);
		scanf("%s",idjv);
		fpt=fopen("gestion.don","r");
		do{
        fread(&gj,sizeof(gj),1,fpt); 
		if(strcmp(idjv,gj.idj)==0){
			gotoxy(35,20);
			printf("Cet ID existait déjà dans les fichiers!!");
			gotoxy(40,21);
			printf("veuillez saisir un autre identifiant");
			getch();
			gotoxy(35,20);
			printf("                                           ");
			gotoxy(40,21);
			printf("                                            ");
			bl=true;
			goto endl;
			break;
			}else{
			bl=false;
			
			}
			}while(!feof(fpt));
			fclose(fpt);
		if(bl==false)
		strcpy(gj.idj,idjv);
		gotoxy(27,12);
		scanf("%s",gj.nomj);	
        gotoxy(27,14);
		scanf("%s",gj.prnj);
		gotoxy(27,16);
		scanf("%s",gj.gnrj);
		gotoxy(27,18);
		scanf("%f",&gj.agej);
    fpt=fopen("gestion.don","a");
    fwrite(&gj,sizeof(gj),1,fpt);  
    fclose(fpt);
    endl:
    gotoxy(27,20);
	printf("Autre Joueur o/n? :");
	rep=getch();
     }while (rep=='o' || rep=='O');
}
/////////////////////////////////////// Function Nombre des Joueur au Fichier
void NombresEnregistrement(){
	system("cls");
	int choi;
	do
	{
		gotoxy(20,2);
        puts("|--------------------------------------------|");
		gotoxy(20,3);
		puts("|");
		gotoxy(35,3);
	    printf("Nombres des Joueur");
		gotoxy(65,3);
		puts("|");
		gotoxy(20,4);
        puts("|--------------------------------------------|");
		gotoxy(19,10);
		printf("1: Compte des Jeuours Ficher Gestion Joueur");
		gotoxy(19,12);
		printf("2: Compte des jeuours Ficher Traitement Jeu");
	gotoxy(19,15);
	printf("Entrez votre choix :");
	gotoxy(40,15);
	printf("                     ");
	gotoxy(40,15);
	scanf("%d",&choi);
	fflush(stdin);
	if((choi<1)||(choi>3))
	{
	gotoxy(57,24);
	printf("Choix incorrect");
	gotoxy(61,25);
	printf("\\_(>_<)_/ \n");
	getch();
	gotoxy(57,24);
	printf("                   ");
	gotoxy(61,25);
	printf("                   ");	
	}
	}while((choi<1)||(choi>3));
	if(choi==1){
	 fpt=fopen("gestion.don","r");
	  fseek(fpt,0,SEEK_END);
	int n1 = ftell(fpt)/sizeof(gj);
	printf("\n\t Nombres Des Joueur Enregistrer Dans Fichier Gestion est : %d Joueur",n1);
	fclose(fpt);
	getch();
	}else if(choi==2){
	fpt=fopen("traitement.don","r");
	  fseek(fpt,0,SEEK_END);
	int n2 = ftell(fpt)/sizeof(tj);
	printf("\n\t Nombres Des Joueur Enregistrer Dans Fichier Traitement Jeu est : %d Joueur",n2);
	fclose(fpt);
	getch();
	}	
}
/////////////////////////////////////// Function Lister Joueurs
void Lister()
{
	i=0;
	system("cls");
	gotoxy(20,1);
    puts("|--------------------------------------------|");
	gotoxy(20,2);
	puts("|");
	gotoxy(35,2);
	printf("Liste des joueurs");
	gotoxy(65,2);
	puts("|");
	gotoxy(20,3);
    puts("|--------------------------------------------|");
	  gotoxy(2,5);
	  printf("________________________________________________________________________");
	  gotoxy(3,6);
	  printf("#ID");
	  gotoxy(16,6);
	  printf("Nom");
	  gotoxy(32,6);
	  printf("Prénom");
	  gotoxy(48,6);
	  printf("Sexe");
	  gotoxy(64,6);
	  printf("Age");
	  gotoxy(2,7);
	  printf("________________________________________________________________________");
      fpt=fopen("gestion.don","r");
     do{
        fread(&gj,sizeof(gj),1,fpt);  
        if(!feof(fpt))
         {
	    	gotoxy(4,8+i*2);
	        printf("%s", gj.idj);
	        gotoxy(16,8+i*2);
	        printf("%s", gj.nomj);
	        gotoxy(32,8+i*2);
            printf("%s", gj.prnj);
            gotoxy(48,8+i*2);
            printf("%s", gj.gnrj);
	        gotoxy(64,8+i*2);
	        printf("%.1f ANS", gj.agej); 
	        gotoxy(2,9+i*2);
		 	printf("------------------------------------------------------------------------");
         }
         i++;   
     }while(!feof(fpt));
     fclose(fpt);
     gotoxy(10,11+i*2);
     printf("Click sur une touche pour continue au menu principale....");
     getch();
 }
 /////////////////////////////////////// Function Rechercher Joueur
void Rechercher()
{
	bool bl=false;
    char nr[15];
	system("cls");
	gotoxy(20,2);
    puts("|--------------------------------------------|");
	gotoxy(20,3);
	puts("|");
	gotoxy(28,3);
	printf("Rechercher un joueur");
	gotoxy(65,3);
	puts("|");
	gotoxy(20,4);
    puts("|--------------------------------------------|");
	gotoxy(10,6);
	printf("ID Joueur à rechercher : ");
	scanf("%s",idjr);
    fpt=fopen("gestion.don","r");
     do{
         fread(&gj,sizeof(gj),1,fpt);  
         if(strcmp(idjr,gj.idj)==0)
         {   
		   InterfaceSaisie();
               gotoxy(26,10);
	           printf("%s",gj.idj);
	           gotoxy(26,12);
	           printf("%s",gj.nomj);
	           gotoxy(26,14);
               printf("%s",gj.prnj);
               gotoxy(26,16);
               printf("%s",gj.gnrj);
	           gotoxy(26,18);
	           printf("%.1f",gj.agej); 
	           bl=true;
               break; 
         }
     }while(!feof(fpt));
     fclose(fpt);
     if(bl==false){
     	gotoxy(10,8);
     	printf("ID Introuvable");
	 }
     gotoxy(10,25);
     printf("Appuyer sur une touche pour revenir au menu principale....");
     getch();
 }
/////////////////////////////////////// Function Modifier Joueur
void Modifier()
{
	int pos,ln,q,tr=0;
   char ncp[12];
   do{
    system("cls");
    gotoxy(20,2);
    puts("|--------------------------------------------|");
	gotoxy(20,3);
	puts("|");
	gotoxy(28,3);
	printf("Modifier un Joueur");
	gotoxy(65,3);
	puts("|");
	gotoxy(20,4);
    puts("|--------------------------------------------|");
    gotoxy(16,6);
	printf("ID Joueur à modifier : ");
	scanf("%s",ncp);
    fpt=fopen("gestion.don","r");
    if(fpt==NULL){ 
        gotoxy(22,9);
        printf("Fichier introuvable!!!");
     }
    else{
    	do{
    	pos=ftell(fpt);
        fread(&gj,sizeof(gj),1,fpt);
	    if (strcmp(ncp,gj.idj)==0)
          {
	        InterfaceSaisie();
            gotoxy(27,10);
	        printf("%s",gj.idj);
	        gotoxy(27,12);
	    	printf("%s",gj.nomj);
	    	gotoxy(27,14);
        	printf("%s",gj.prnj);
            gotoxy(27,16);
            printf("%s",gj.gnrj);
	        gotoxy(27,18);
	        printf("%.1f",gj.agej);
            tr=1;
       		}
		}while (!feof(fpt)&&(strcmp(ncp,gj.idj)!=0));
		fclose(fpt);
		if(tr==0){
	   		gotoxy(16,9);printf("Pas de joueur avec ce ID !!!");
		}
		else{	    
	    	do{
        gotoxy(16,20);
		printf("Numéro de la ligne à modifier : ");
    do
	{
	gotoxy(46,24);
	printf("                     ");
	gotoxy(57,24);
	printf("                     ");
	gotoxy(61,25);
	printf("                     ");
	gotoxy(48,20);
	scanf("%d",&ln);
	fflush(stdin);
	if((ln<1)||(ln>5))
	{
	gotoxy(57,24);
	printf("Ligne incorrect");
	gotoxy(61,25);
	printf("\\_(>_<)_/ \n");
	getch();
	} 
	}while((ln<1)||(ln>5));
    switch(ln)
    {
	case 1:
	gotoxy(27,10);
	printf("                                ");
	gotoxy(27,10);
	scanf("%s",gj.idj);
	break;
	case 2:
	gotoxy(27,12);
	printf("                                ");
	gotoxy(27,12);
	scanf("%s",gj.nomj);
	break;
	case 3:
	gotoxy(27,14);
	printf("                                ");
	gotoxy(27,14);
	scanf("%s",gj.prnj);
	break;
	case 4:
	gotoxy(27,16);
	printf("                                ");
	gotoxy(27,16);
	scanf("%s",gj.gnrj);
	break;
	case 5:
	gotoxy(27,18);
	printf("                                ");
	gotoxy(27,18);
	scanf("%f",&gj.agej);
	break;
    }
    gotoxy(16,21);
	printf("                                                      ");
    gotoxy(16,21);
	printf("Autre ligne à modifier o/n:");
    q=getch();
	}while(toupper(q)=='O');
	gotoxy(16,21); printf("                                                          ");
    gotoxy(16,21); printf("Voulez vous vraiment modifier cet enregistrement o/n?");
    q=getch();
    if(toupper(q)=='O')
    {
    fpt=fopen("gestion.don","r+");
    fseek(fpt,pos,0);
    fwrite(&gj,sizeof(gj),1,fpt);
    fclose(fpt);
    }
    }
    }
         gotoxy(16,21); printf("                                                          ");
         gotoxy(16,21); printf("modifier un autre enregistrement o/n?:");
         q=getch();
     }while(toupper(q)=='O');	
}
/////////////////////////////////////// Function Suppresion Joueur
void Supprimer()
{
int rep,ch1;
   char c[12];
   bool tr=false;
   do{
	system("cls");
	gotoxy(20,2);
        puts("|--------------------------------------------|");
		gotoxy(20,3);
		puts("|");
		gotoxy(34,3);
	  	printf("Supprimer un Joueur");
		gotoxy(65,3);
		puts("|");
		gotoxy(20,4);
        puts("|--------------------------------------------|");
       gotoxy(10,7);
	   fpt=fopen("gestion.don","r");
	   printf("IDENTIFICATEUR de Joueur à supprimer :");
	   scanf("%s",c);
       fn=fopen("newgestion.don","w");
       fclose(fn);
        if(fpt!=NULL)
        {
          while(!feof(fpt))
          {
             fread(&gj,sizeof(gj),1,fpt);
             if (strcmp(c,gj.idj)!=0)
             {
               if(!feof(fpt)){               	
               	 fn=fopen("newgestion.don","a");
               	 fwrite(&gj,sizeof(gj),1,fn);
         	   	 fclose(fn);      	 
			   }
                   
             }
               else 
               {
                	InterfaceSaisie();
	               	gotoxy(27,10);printf("%s",gj.idj);
	              	gotoxy(27,12);printf("%s",gj.nomj);
	              	gotoxy(27,14);printf("%s",gj.prnj);
	              	gotoxy(27,16);printf("%s",gj.gnrj);
	               	gotoxy(27,18);printf("%.1f",gj.agej);
	            	tr=true;
             	}
          }
	   fclose(fpt);
	   if(tr==true)
       {
          gotoxy(15,21);printf("Etes-vous sûr de  supprimer ce Joueur o/n?:");
          ch1=getch();
	      if (toupper(ch1)=='O'){
             remove("gestion.don");
	         rename("newgestion.don","gestion.don");
	         gotoxy(15,21);printf("                                                ");
       	     gotoxy(15,21);printf("Le Joueur est bien supprimé!");
             getch();
          }
	      else remove("newgestion.don");
       }
       else{
            remove("newgestion.don");
             gotoxy(15,21);printf("                                                ");
	        gotoxy(15,21);printf("ID introuvable!");
	        getch();
       }
        gotoxy(15,21);printf("                                                ");
	   gotoxy(15,21);printf("Voulez vous un autre joueur à supprimer o/n?:");
	   rep=getch();
    }
    else{
    	gotoxy(15,21);printf("                                                ");
    	gotoxy(15,21);printf("Fichier introuvable !?");
	}
	}while(toupper(rep)=='O');	
}
/////////////////////////////////////// Function Niveau
void Level(){
	i=0;
	bool bl = false;
		gotoxy(20,6);
		puts(">> IDENTIFICATEUR  : ");
		gotoxy(41,6);
		scanf("%s",tj.id);
		fpt=fopen("gestion.don","r");
		do{
         fread(&gj,sizeof(gj),1,fpt);  
         if(strcmp(tj.id,gj.idj)==0 && !feof(fpt))
         {
		gotoxy(20,8);
		printf("Bienvenue %s %s", gj.nomj, gj.prnj);
		fflush(stdin);
		bl = true;
		}
		
		}while(!feof(fpt));
		if (bl==false){
	 	goto end;
	 }
		gotoxy(20,10);
		printf("Proposition du Joueur");
		gotoxy(20,11);
        puts("_____________________");
		gotoxy(43,10);
		printf("\t La Résultat de Comparaison");
		gotoxy(43,11);
    	puts("\t __________________________");
   TimeDebut();
	do{
		gotoxy(25,12+2*i);
		scanf("%d",&gn);
	if(gn>rn)
		{
		gotoxy(45,12+2*i);
		puts("\t Trop Grand.....Recommencez");
		}
	else if(gn<rn)
		{
		gotoxy(45,12+2*i);
		puts("\t Trop Petit.....Recommencez");
		}
	else
		{
		gotoxy(47,14+2*i);
		puts(">>>>>> Jeu terminé <<<<<<");
		gotoxy(45,16+2*i);
		printf("\"Bravo! Trouvé en (%d) essais\"", i+1);
		gotoxy(45,18+2*i);
		printf("Le nombre aléatoire était : %d\n", rn);
		getch();
		break;
		}
		i++;
	if(i>10){
		system("cls");
		gotoxy(35,12);
		printf("Vous avez terminé vos 10 essais");
		gotoxy(33,13);
		printf("Mais votre score sera sauvegardé");
		getch();
	if(i<10){
		tj.statue = 0;
		}else{
		tj.statue = 1;	
		}
		break;
		}
	}while(gn != rn);
	TimeFin();
		tj.durh = dfh;
		tj.durm = dfm;
		tj.durs = dfs;
	tj.score = i;
	fpt=fopen("traitement.don","a");
    fwrite(&tj,sizeof(tj),1,fpt);  
    fclose(fpt);
    getch();
	 end:
	 	if(bl==false){
	 	gotoxy(10,8);
     	printf("ID Introuvable");
     	getch();
     	MainMenu();
     	 }
}
/////////////////////////////////////// Function SCORE
void Score(){
		system("cls");
		gotoxy(20,2);
        puts("|--------------------------------------------|");
		gotoxy(20,3);
		puts("|");
		gotoxy(35,3);
		puts("Liste des Scores");
		gotoxy(65,3);
		puts("|");
		gotoxy(20,4);
        puts("|--------------------------------------------|");
        gotoxy(3,7);
		puts("ID");
		gotoxy(15,7);
		puts("\tEssais");
		gotoxy(28,7);
		puts("Niveau");
		gotoxy(40,7);
		puts("Points");
		gotoxy(50,7);
		puts("\tStatue");							
		gotoxy(65,7);
		puts("\tDurée");
		gotoxy(1,8);
		puts("|_____________|___________|___________|_______________|_______________|___________|");
		fpt=fopen("traitement.don","r");
		i=0;
	do{
		fread(&tj,sizeof(tj),1,fpt);  
        if(!feof(fpt)){
        gotoxy(3,9+2*i);
		printf("%s",tj.id);
		gotoxy(15,9+2*i);
		printf("\t%d Essais", tj.score+1);
	if(tj.niv == 1)
		{
		gotoxy(28,9+2*i);
		printf("Facile");
		}
	else if(tj.niv == 2)
		{
		gotoxy(28,9+2*i);
		printf("Difficile");
		}
		if(tj.score==1 || tj.score==2){
		tj.point = 100;	
		} else if(tj.score==3 || tj.score==4){
		tj.point = 75;	
		} else if(tj.score==5 || tj.score==6){
		tj.point = 50;	
		} else if(tj.score==7 || tj.score==8){
		tj.point = 25;	
		} else{
		tj.point = 0;	
		}
		gotoxy(40,9+2*i);
		printf("%d", tj.point);
		
		if(tj.statue==1){
			gotoxy(50,9+2*i);
			printf("\tIncomplet");
		}else{
			gotoxy(50,9+2*i);
			printf("\tComplet");
		}
		gotoxy(65,9+2*i);
		printf("\t%d:%d:%d S",tj.durh, tj.durm, tj.durs);
		gotoxy(1,10+2*i);
		printf("|-------------|-----------|-----------|---------------|---------------|-----------|");
		}
		i++;
		}while(!feof(fpt));
		fclose(fpt);
		gotoxy(15,12+2*i);
		printf("Appuyer sur une touche pour continuer...");
} 
/////////////////////////////////////// Exit
 void Exit(){
 	system("cls");
		gotoxy(16,9);
		printf("Merci d'avoir joué, j'espère que vous avez Amusé le jeu");
		gotoxy(40,11);
		printf("\\_(^_^)_/");
		gotoxy(58,20);
		exit(0);
 }
 /////////////////////////////////////// Choix Faux
 void Wrong(){
		gotoxy(57,24);
		printf("Choix incorrect");
		gotoxy(61,25);
		printf("\\_(>_<)_/ \n");
		getch();
 }
 /////////////////////////////////////// Main Function
main(){
	srand(time(NULL));
    setlocale(LC_CTYPE,"fra");
	  do{
    MainMenu();
    do
	{
	gotoxy(46,24);
	puts("                     ");
	gotoxy(57,24);
	printf("                   ");
	gotoxy(61,25);
	printf("                   ");
	gotoxy(46,24);
	scanf("%d",&choix);
	fflush(stdin);
	if((choix<0)||(choix>9))
	{
	  	Wrong();
	}
	  
	}while((choix<0)||(choix>9));

       switch(choix)
	   {
        case 1:Lecture();break;
        case 2:Lister();break;
        case 3:NombresEnregistrement();break;
        case 4:Rechercher();break;
        case 5:Modifier();break;
        case 6:Supprimer();break;
        case 7:
        tj.niv = 1;
		system("cls");
		gotoxy(20,2);
        puts("|------------------------------------------|");
		gotoxy(20,3);
		puts("|    Jeu du Nombre Mystére Entre [1-99]    |");
		gotoxy(20,4);
        puts("|------------------------------------------|");
        rn = 1 + (rand() % (99));
		Level();
		break;
        case 8:
        tj.niv = 2;
		system("cls");
		gotoxy(20,2);
        puts("|------------------------------------------|");
		gotoxy(20,3);
		puts("|    Jeu du Nombre Mystére Entre [1-999]   |");
		gotoxy(20,4);
        puts("|------------------------------------------|");
        rn = 1 + (rand() % (999));
		Level();
		break;
		case 9:Score();getch();break;
       }
    }while(choix!=0);
    Exit();
}
