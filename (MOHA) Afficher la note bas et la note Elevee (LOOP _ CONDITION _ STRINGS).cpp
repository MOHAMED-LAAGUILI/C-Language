#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>
                                       
main(){
	
char nom[15],
	prn[15],
	ne[15],
	prne[15],
	prnb[15],
	nb[15];
float moy,
	moye,
	moyb;
int i;
moye = 0;
moyb = 0;

	setlocale(LC_CTYPE,"fra");
	
	for(i = 0;i <= 9; i++){
		printf("\n\t Entrez Le Nom de l'étudiant Numéro #%d : ", i+1);
		scanf("%s", nom);
		printf("\n\t Entrez Le Prénom de l'étudiant Numéro #%d : ", i+1);
		scanf("%s", prn);
		printf("\n\t Entrez Le moyenne de l'étudiant Numéro #%d : ", i+1);
		scanf("%f",&moy);
		
		if ( moy > moye ){
			moye = moy;
			strcpy(ne,nom);
			strcpy(prne,prn);
		}
		if( i == 0 ){
			moyb = moy;
			strcpy(nb,nom);
			strcpy(prnb,prn);
		} else
		if( moy < moyb )
			moyb = moy;
			strcpy(nb,nom);
			strcpy(prnb,prn);
	}
	
	printf("\n\t >> L'etudiant qui a la moyenne la plus elevee");
	printf("\n Nom : %s \n Prenom : %s \n Moyenne : %f", ne, prne, moye);
	printf("\n\t >> L'etudiant qui a la moyenne la plus basse");
	printf("\n Nom : %s \n Prenom : %s \n Moyenne : %f", nb, prnb, moyb);
	getch();
	
	return 0;
	getch();	
}
// MOHAMED LAAGUILI
	


