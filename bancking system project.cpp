#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<locale.h>
// structure de client		
typedef struct Client{
		char cin[10],nom[20],prenom[20],tel[10];
	}clt;
	 //structure de compte
typedef struct compte{	
						char numCmp[20];
						clt cl;
						float solde;
					}cmp;
// structure de operation
typedef struct Operation{
						int numOp;
						cmp num;
						char type;
						float mont;
					}op;


// declaration e fonction
void menu(void);
void navigate(int choix);
//fonction de clients
void ajoute_cl();
void lister_cl();
void lister_cl();
void rech_cl();
void sup_cl();
//fonction de compt 
void ajoute_cmp();
void lister_cmp();
void lister_cmp();
void rech_cmp();
void sup_cmp();
//foction de operation
void ajoute_op();
void lister_op();
void lister_op();
void rech_op();
void sup_op();
void gotoxy(int x,int y)
{
  COORD pos={x,y};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

main(){
	setlocale(LC_CTYPE,"fra");
	menu();
}

void menu(void)
{ 
	system("cls");
	int choix;
	gotoxy(10,1);
	printf("Gestion des clients");
	gotoxy(50,1);
	printf("Gestion comptes");
	gotoxy(90,1);
	printf("Gestion des operations");
	//clients
	gotoxy(10,3);
	printf("1): Ajouter");
	gotoxy(10,4);
	printf("2): Lister");
	gotoxy(10,5);
	printf("3): Rechercher");
	gotoxy(10,6);
	printf("4): Modifier");
	gotoxy(10,7);
	printf("5): Supprimer");
	//comptes
	gotoxy(50,3);
	printf("6): Ajouter");
	gotoxy(50,4);
	printf("7): Lister");
	gotoxy(50,5);
	printf("8): Rechercher");
	gotoxy(50,6);
	printf("9): Modifier");
	gotoxy(50,7);
	printf("10): Supprimer");
	//operation
	gotoxy(90,3);
	printf("11): Ajouter");
	gotoxy(90,4);
	printf("12): Lister");
	gotoxy(90,5);
	printf("13): Rechercher");
	gotoxy(90,6);
	printf("14): Modifier");
	gotoxy(90,7);
	printf("15): Supprimer");	
	gotoxy(5,9);
	printf("entre votre Choix:");
	gotoxy(23,9);
	scanf("%d",&choix);
	navigate(choix);
}
//client 
void ajoute_cl() {
    system("cls");
    int rep;
    clt cls;
    FILE *file;
    gotoxy(40,1);
	printf("fiche clients     ");
	gotoxy(35,3);
	printf("CIN clients       : ");
	gotoxy(35,4);
	printf("Nom clients       : ");
	gotoxy(35,5);
	printf("Prenom clients    : ");
	gotoxy(35,6);
	printf("Telephone clients : ");
	//======scan donnee====
	gotoxy(55,3);
	scanf("%s", cls.cin);
	gotoxy(55,4);
	scanf("%s", cls.nom);
	gotoxy(55,5);
	scanf("%s", cls.prenom);
	gotoxy(55,6);
	scanf("%s", cls.tel);
    	
    file = fopen("clients.dat", "ab");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    fwrite(&cls, sizeof(clt), 1, file);
    fclose(file);

    printf("Le client a ete ajoute avec succes.\n");
    printf("Autre clients � ajouter O/N   : ");
	rep=getch();
	if(toupper(rep)=='N'){
		menu();
	}else if(toupper(rep)=='O'){
		ajoute_cl();
	}
}
void lister_cl() {
    system("cls");
    
    clt cls;
    FILE *file;
    int index = 1,rep;
	gotoxy(30,1);
    printf("Liste des clients:\n\n");
    file = fopen("clients.dat", "rb");
    if (file == NULL) {
        printf("Aucun client trouve.\n");
        return;
    }
	gotoxy(25,3);
    printf("%-5s %-15s %-15s %-15s %-15s\n", "No.", "CIN", "Nom", "Prenom", "Telephone");
    while (fread(&cls, sizeof(clt), 1, file)) {
    	gotoxy(25,3+index);
        printf("%-5d %-15s %-15s %-15s %-15s", index++, cls.cin, cls.nom, cls.prenom, cls.tel);
    }
	
    fclose(file);
    gotoxy(35,8+index);
    printf("retour au menu principal  O/N:");
    rep=getch();
    if(toupper(rep)=='O'){
    	menu();
	}else if(toupper(rep)=='N'){
		exit (1);  
	}
}
void rech_cl() {
    system("cls");
    clt cls;
    FILE *file;
    char cin[10];
    int found = 0,rep;
	gotoxy(30,1);
    printf("Recherche d'un client par CIN:");
    gotoxy(25,2);
    printf("Entrez le CIN du client a rechercher: ");
    scanf("%s", cin);

    file = fopen("clients.dat", "rb");
    if (file == NULL) {
        printf("Aucun client trouve.\n");
        return;
    }

    while (fread(&cls, sizeof(clt), 1, file)) {
        if (strcmp(cls.cin, cin) == 0) {
        	gotoxy(30,4);
        	printf("Client trouve:\n");
        	gotoxy(25,5);
    		printf("%-15s %-15s %-15s %-15s", "CIN", "Nom", "Prenom", "Telephone");           
            gotoxy(25,6);
        	printf("%-15s %-15s %-15s %-15s", cls.cin, cls.nom, cls.prenom, cls.tel);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Aucun client avec ce CIN n'a ete trouve.\n");
    }

    fclose(file);
    gotoxy(35,8);
    printf("retour au menu principal  O/N:");
    rep=getch();
    if(toupper(rep)=='O'){
    	menu();
	}else if(toupper(rep)=='N'){
		exit (1);  
	}
}


void mod_cl() {
    system("cls");
    Client cls;
    FILE *file;
    char cin[10];
    int found = 0, rep;

    printf("Modification des details d'un client\n");
    printf("Entrez le CIN du client a modifier: ");
    scanf("%s", cin);

    file = fopen("clients.dat", "r+b");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    while (fread(&cls, sizeof(Client), 1, file)) {
        if (strcmp(cls.cin, cin) == 0) {
            printf("Nouveaux details du client:\n");
            printf("Nouveau nom      : ");
            scanf("%s", cls.nom);
            printf("Nouveau prenom   : ");
            scanf("%s", cls.prenom);
            printf("Nouveau telephone: ");
            scanf("%s", cls.tel);

            fseek(file, -sizeof(Client), SEEK_CUR); // Move file pointer back to the beginning of the record
            fwrite(&cls, sizeof(Client), 1, file); // Write the modified client record
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Aucun client avec ce CIN n'a ete trouve.\n");
    } else {
        printf("Les details du client ont ete modifies avec succes.\n");
    }

    fclose(file);

    printf("Retour au menu principal ? (O/N): ");
    rep = getch();
    if (toupper(rep) == 'O') {
        menu();
    } else if (toupper(rep) == 'N') {
        exit(1);
    }
}


void sup_cl() {
    system("cls");
    clt cls;
    FILE *file, *tempFile;
    char cin[10];
    int found = 0,rep;
	gotoxy(35,1);
    printf("Suppression d'un client");
    gotoxy(30,3);
    printf("Entrez le CIN du client a supprimer: ");
    scanf("%s", cin);

    file = fopen("clients.dat", "rb");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    tempFile = fopen("temp.dat", "wb");
    if (tempFile == NULL) {
        printf("Erreur lors de la creation du fichier temporaire.\n");
        fclose(file);
        return;
    }

    while (fread(&cls, sizeof(clt), 1, file)) {
        if (strcmp(cls.cin, cin) == 0) {
            found = 1;
        } else {
            fwrite(&cls, sizeof(clt), 1, tempFile);
        }
    }

    fclose(file);
    fclose(tempFile);

    if (!found) {
        printf("Aucun client avec ce CIN n'a ete trouve.\n");
    } else {
        remove("clients.dat");
        rename("temp.dat", "clients.dat");
        printf("Le client a ete supprime avec succes.\n");
    }
    gotoxy(20,13);
    printf("retour au menu principal  O/N:");
    rep=getch();
    if(toupper(rep)=='O'){
    	menu();
	}else if(toupper(rep)=='N'){
		exit (1);  
	}
}

//compt
void ajoute_cmp() {
    system("cls");
    cmp cmpt;
    FILE *file;
    int rep;
	gotoxy(35,1);
    printf("Ajouter un nouveau compte");
    gotoxy(25,3);
    printf("Numero de compte      : ");
    gotoxy(25,4);
    printf("CIN du client associe : ");  
    gotoxy(25,5);
    printf("Solde                 : ");
    
	gotoxy(50,3);
	scanf("%s", cmpt.numCmp);
	gotoxy(50,4);
	scanf("%s", cmpt.cl.cin);
	gotoxy(50,5);
	scanf("%f", &cmpt.solde);
    file = fopen("comptes.dat", "ab");
    if (file == NULL) {
    	gotoxy(20,7);
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    fwrite(&cmpt, sizeof(cmp), 1, file);
    fclose(file);
	gotoxy(20,8);
    printf("Le compte a ete ajoute avec succes.\n");
    gotoxy(20,13);
    printf("retour au menu principal  O/N:");
    rep=getch();
    if(toupper(rep)=='O'){
    	menu();
	}else if(toupper(rep)=='N'){
		exit (1);  
	}
}

void lister_cmp() {
    system("cls");
    cmp cmpt;
    FILE *file;
    int index = 1,rep;
	gotoxy(35,1);
    printf("Liste des comptes:\n\n");
    file = fopen("comptes.dat", "rb");
    if (file == NULL) {
    	gotoxy(30,3);
        printf("Aucun compte trouve.\n");
        return;
    }
	gotoxy(25,5);
    printf("%-5s %-20s %-10s %-10s\n", "No.", "Numero de compte", "CIN client", "Solde");
    while (fread(&cmpt, sizeof(cmp), 1, file)) {
    	gotoxy(25,5+index);
        printf("%-5d %-20s %-10s %-10.2f\n", index++, cmpt.numCmp, cmpt.cl.cin, cmpt.solde);
    }

    fclose(file);
    gotoxy(35,8+index);
    printf("retour au menu principal  O/N:");
    rep=getch();
    if(toupper(rep)=='O'){
    	menu();
	}else if(toupper(rep)=='N'){
		exit (1);  
	}
}

void mod_cmp() {
    system("cls");
    cmp cmpt;
    FILE *file;
    char numCompt[20];
    int found = 0;

    printf("Modification des details d'un compte:\n");
    printf("Entrez le numero de compte du compte a modifier: ");
    scanf("%s", numCompt);

    file = fopen("comptes.dat", "r+b");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    while (fread(&cmpt, sizeof(cmp), 1, file)) {
        if (strcmp(cmpt.numCmp, numCompt) == 0) {
            printf("Nouveaux details du compte:\n");
            printf("Nouveau solde: ");
            scanf("%f", &cmpt.solde);
            
            fseek(file, -sizeof(cmp), SEEK_CUR); // Move file pointer back to the beginning of the record
            fwrite(&cmpt, sizeof(cmp), 1, file); // Write the modified account record
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Aucun compte avec ce numero de compte n'a ete trouve.\n");
    } else {
        printf("Les details du compte ont ete modifies avec succes.\n");
    }

    fclose(file);
}

void rech_cmp() {
    system("cls");
   	cmp cmpt;
    FILE *file;
    char numCompt[20];
    int found = 0,rep;
	gotoxy(35,1);
    printf("Recherche d'un compte par numero de compte");
    gotoxy(25,3);
    printf("Entrez le numero de compte a rechercher: ");
    gotoxy(75,3);
    scanf("%s", numCompt);

    file = fopen("comptes.dat", "rb");
    if (file == NULL) {
        printf("Aucun compte trouve.\n");
        return;
    }

    while (fread(&cmpt, sizeof(cmp), 1, file)) {
        if (strcmp(cmpt.numCmp, numCompt) == 0) {
        	gotoxy(25,5);
            printf("Compte trouve");
            gotoxy(20,6);
            printf("Numero de compte     : %s", cmpt.numCmp);
            gotoxy(20,7);
            printf("CIN du client associe: %s", cmpt.cl.cin);
            gotoxy(20,8);
            printf("Solde                : %.2f", cmpt.solde);
            found = 1;
            break;
        }
    }

    if (!found) {
    	gotoxy(25,4);
        printf("Aucun compte avec ce numero de compte n'a ete trouve.");
    }

    fclose(file);
    gotoxy(25,10);
    printf("retour au menu principal  O/N:");
    rep=getch();
    if(toupper(rep)=='O'){
    	menu();
	}else if(toupper(rep)=='N'){
		exit (1);  
	}
}

void sup_cmp() {
    system("cls");
	cmp cmpt;
    FILE *file, *tempFile;
    char numCompt[20];
    int found = 0;
	gotoxy(35,1);
    printf("Suppression d'un compte");
    gotoxy(30,3);
    printf("Entrez le numero de compte du compte a supprimer: ");
    gotoxy(80,3);
    scanf("%s", numCompt);

    file = fopen("comptes.dat", "rb");
    if (file == NULL) {
    	gotoxy(35,3);
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    tempFile = fopen("temp.dat", "wb");
    if (tempFile == NULL) {
    	gotoxy(35,3);
        printf("Erreur lors de la creation du fichier temporaire.\n");
        fclose(file);
        return;
    }

    while (fread(&cmpt, sizeof(cmp), 1, file)) {
        if (strcmp(cmpt.numCmp, numCompt) == 0) {
            found = 1;
        } else {
            fwrite(&cmpt, sizeof(cmp), 1, tempFile);
        }
    }

    fclose(file);
    fclose(tempFile);

    if (!found) {
    	gotoxy(35,4);
        printf("Aucun compte avec ce numero de compte n'a ete trouve.\n");
    } else {
        remove("comptes.dat");
        rename("temp.dat", "comptes.dat");
        gotoxy(30,4);
        printf("Le compte a ete supprime avec succes.\n");
    }
}

//operation
void ajoute_op() {
    system("cls");
    op opr;
    FILE *file;
	gotoxy(35,1);
    printf("Ajouter une nouvelle operation");
    gotoxy(25,3);
    printf("Numero d'operation                    : ");
    gotoxy(25,4);
    printf("Numero de compte associe              : ");
    gotoxy(25,5);
    printf("Type d'operation (C: Credit, D: Debit): ");
    gotoxy(25,6);
    printf("Montant: ");
    gotoxy(65,3);
    scanf("%s", &opr.numOp);
    gotoxy(65,4);
    scanf("%s", &opr.num.numCmp);
    gotoxy(65,5);
    scanf(" %c", &opr.type);
    gotoxy(65,6);
    scanf("%f", &opr.mont);

    // Open operations file
    file = fopen("operations.dat", "ab");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier des operations.\n");
        return;
    }

    // Write the operation to the operations file
    fwrite(&opr, sizeof(op), 1, file);
    fclose(file);

    // Open the accounts file to update the balance
    file = fopen("comptes.dat", "r+b");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier des comptes.\n");
        return;
    }

    cmp cmpt;
    float balance = 0;

    // Find the associated account
    while (fread(&cmpt, sizeof(cmp), 1, file)) {
        if (strcmp(cmpt.numCmp, opr.num.numCmp) == 0) {
            balance = cmpt.solde;
            if (opr.type == 'C') {
                balance += cmpt.solde; // Credit
            } else if (opr.type == 'D') {
                balance -= cmpt.solde; // Debit
            }
            fseek(file, -sizeof(cmp), SEEK_CUR); // Move file pointer back to the beginning of the record
            fwrite(&cmpt, sizeof(cmp), 1, file); // Write the updated account record
            break;
        }
    }

    fclose(file);

    printf("L'operation a ete ajoutee avec succes.\n");
    gotoxy(25,10);
    printf("retour au menu principal  O/N:");
    int rep=getch();
    if(toupper(rep)=='O'){
    	menu();
	}else if(toupper(rep)=='N'){
		exit (1);  
	}
}

void lister_op() {
    system("cls");
    FILE *file;
    op oper;
    int index = 1;

    printf("Liste des op�rations\n\n");

    file = fopen("operations.dat", "rb");
    if (file == NULL) {
        printf("Aucune op�ration trouv�e.\n");
        return;
    }

    printf("%-5s %-20s %-10s %-10s\n", "No.", "Numero de compte", "Type", "Montant");
    while (fread(&oper, sizeof(op), 1, file)) {
        printf("%-5d %-20s %-10c %-10.2f\n", index++, oper.num.numCmp, oper.type, oper.mont);
    }

    fclose(file);
    gotoxy(25,8+index);
    printf("retour au menu principal  O/N:");
    int rep=getch();
    if(toupper(rep)=='O'){
    	menu();
	}else if(toupper(rep)=='N'){
		exit (1);  
	}
}
void rech_op() {
    system("cls");
    FILE *file;
    op oper;
    char numCmp[20];
    int found = 0,index =1;
	gotoxy(35,1);
    printf("Recherche d'une op�ration par num�ro de compte");
    gotoxy(30,2);
    printf("Entrez le num�ro de compte pour rechercher les op�rations : ");
    gotoxy(89,2);
    scanf("%s", numCmp);

    file = fopen("operations.dat", "rb");
    if (file == NULL) {
        printf("Aucune op�ration trouv�e.\n");
        return;
    }

    while (fread(&oper, sizeof(op), 1, file)) {
        if (strcmp(oper.num.numCmp, numCmp) == 0) {
            gotoxy(25,5);
            printf("%-5s %-20s %-10s %-10s\n", "No.", "Numero de compte", "Type", "Montant");
    		while (fread(&oper, sizeof(op), 1, file)) {
    			gotoxy(25,5);
        		printf("%-5d %-20s %-10c %-10.2f\n", index++, oper.num.numCmp, oper.type, oper.mont);
    		}
    		found = 1;
        }
    }

    if (!found) {
        printf("Aucune op�ration pour ce num�ro de compte n'a �t� trouv�e.\n");
    }

    fclose(file);
    gotoxy(25,8+index);
    printf("retour au menu principal  O/N:");
    int rep=getch();
    if(toupper(rep)=='O'){
    	menu();
	}else if(toupper(rep)=='N'){
		exit (1);  
	}
}
void mod_op() {
    system("cls");
    FILE *file;
    op oper;
    char numCmp[20];
    int found = 0;

    gotoxy(35,1);
    printf("Modification d'une op�ration\n\n");
    gotoxy(30,3);
    printf("Entrez le num�ro de compte pour modifier les op�rations : ");
    gotoxy(87,3);
    scanf("%s", numCmp);

    file = fopen("operations.dat", "r+b");
    if (file == NULL) {
        gotoxy(25,5);
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    while (fread(&oper, sizeof(op), 1, file)) {
        if (strcmp(oper.num.numCmp, numCmp) == 0) {
            found = 1;
            break;
        }
    }

    if (!found) {
        gotoxy(25,5);
        printf("Aucune op�ration pour ce num�ro de compte n'a �t� trouv�e.\n");
        fclose(file);
        return;
    }

    // Display operation details
    gotoxy(25,5);
    printf("Nouveaux d�tails de l'op�ration\n");
    gotoxy(25,6);
    printf("Type (D: Depot, R: Retrait) : ");
    gotoxy(25,7);
    printf("Montant                     : ");

    gotoxy(87,6);
    scanf(" %c", &oper.type);
    gotoxy(87,7);
    scanf("%f", &oper.mont);

    fseek(file, -sizeof(op), SEEK_CUR);
    fwrite(&oper, sizeof(op), 1, file);
    fclose(file);

    printf("L'op�ration a �t� modifi�e avec succ�s.\n");

    printf("Retour au menu principal ? (O/N): ");
    int rep = getch();
    if (toupper(rep) == 'O') {
        menu();
    } else if (toupper(rep) == 'N') {
        exit(1);
    }
}


void sup_op() {
    system("cls");
    FILE *file, *tempFile;
    op oper;
    char numCmp[20];
    int found = 0;
	gotoxy(35,1);
    printf("Suppression d'une op�ration");
    gotoxy(30,2);
    printf("Entrez le num�ro de compte pour supprimer les op�rations : ");
    gotoxy(89,2);
    scanf("%s", numCmp);

    file = fopen("operations.dat", "rb");
    if (file == NULL) {
    	gotoxy(30,5);
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    tempFile = fopen("temp.dat", "wb");
    if (tempFile == NULL) {
    	gotoxy(30,6);
        printf("Erreur lors de la cr�ation du fichier temporaire.\n");
        fclose(file);
        return;
    }

    while (fread(&oper, sizeof(op), 1, file)) {
        if (strcmp(oper.num.numCmp, numCmp) != 0) {
            fwrite(&oper, sizeof(op), 1, tempFile);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(tempFile);

    if (!found) {
    	gotoxy(25,6);
        printf("Aucune op�ration pour ce num�ro de compte n'a �t� trouv�e.\n");
    } else {
        remove("operations.dat");
        rename("temp.dat", "operations.dat");
        printf("Les op�rations ont �t� supprim�es avec succ�s.\n");
    }
     gotoxy(25,8);
    printf("retour au menu principal  O/N:");
    int rep=getch();
    if(toupper(rep)=='O'){
    	menu();
	}else if(toupper(rep)=='N'){
		exit (1);  
	}
}
void navigate(int choix){
	    switch(choix)
  	 {
  	 	//client
        case 1:ajoute_cl();
        break;
        case 2:lister_cl();
        break;
        case 3:rech_cl();
        break;
        case 4:mod_cl();
        break;
        case 5:sup_cl();
        break;
        case 6:ajoute_cmp();
        break;
        case 7:lister_cmp();
        break;
        case 8:rech_cmp();
        break;
        case 9:mod_cmp();
        break;
        case 10:sup_cmp();
        break;
        case 11:ajoute_op();
        break;
        case 12:lister_op();
        break;
        case 13:rech_op();
        break;
        case 14:mod_op();
        break;
        case 15:sup_op();
        break;
        default:
            printf("Choix invalide.\n");
        break;
       
    }
}
