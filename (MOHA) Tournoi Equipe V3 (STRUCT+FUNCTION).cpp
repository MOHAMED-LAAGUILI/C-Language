#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>
#include<windows.h>
typedef struct statistique{
	int nv, ne, nd, pt;
}stat;

typedef struct equipe {
	char num[15], nom[15], dc[15];
	stat st;
}eqp;
eqp eq[5];
void lecture(eqp e[]){
	printf("\n\n\t\t\t Tournoi de football ");
	for(int i=0;i<5;i++)
	{
		printf("\n\n\t NUMERO DE L'EQUIPE  : ");
		scanf("%s", e[i].num);
		printf("\n\n\t NOM DE L'EQUIPE     : ");
		scanf("%s", e[i].nom);
		printf("\n\n\t DATE DE CREATION    : ");
		scanf("%s", e[i].dc);
		printf("\n\n\t NOMBRE DE VECTOIRE  : ");
		scanf("%d", &e[i].st.nv);
		printf("\n\n\t NOMBRE D EGALITE    : ");
		scanf("%d", &e[i].st.ne);
		printf(" \n\n\t NOMBRE DEFAITES    : ");
		scanf("%d", &e[i].st.nd);
		e[i].st.pt= e[i].st.nv*3+e[i].st.ne;
		printf(" \n\n\t POINT DE L'EQUIPE  : %.2d ", e[i].st.pt);
	}
}
void trier(eqp ep[]){
	char ch[15];
	int ie;
	for(int i=0;i<4;i++)
		for(int j=i+1;j<5;j++)
			if(ep[i].st.pt < ep[j].st.pt)
			{
				strcpy(ch, ep[i].num);
				strcpy(ep[i].num,ep[j].num);
				strcpy(ep[j].num,ch);
				
				strcpy(ch, ep[i].nom);
				strcpy(ep[i].nom,ep[j].nom);
				strcpy(ep[j].nom,ch);
				
				strcpy(ch, ep[i].dc);
				strcpy(ep[i].dc,ep[j].dc);
				strcpy(ep[j].dc,ch);
				
				ie=ep[i].st.nv;
				ep[i].st.nv=ep[j].st.nv;
				ep[j].st.nv=ie;
				
				ie=ep[i].st.ne;
				ep[i].st.ne=ep[j].st.ne;
				ep[j].st.ne=ie;
				
				ie=ep[i].st.nd;
				ep[i].st.nd=ep[j].st.nd;
				ep[j].st.nd=ie;
				
				ie=ep[i].st.pt;
				ep[i].st.pt=ep[j].st.pt;
				ep[j].st.pt=ie;
				
			}
}
void lister(eqp p[]){
	printf("\n\n\t\t\t Classement des équipes ");
	printf("\n\n\t\t Numéro équipe\t\t Nom équipe\t\t totale des points \n\n");
	for(int i=0;i<5;i++)
	{
		printf("\t\t %s", p[i].num);
		printf("\t\t %s", p[i].nom);
		printf("\t\t %d\n\n", p[i].st.pt);
	}
}
main()
{
	setlocale(LC_CTYPE,"fra");
	lecture(eq);
	trier(eq);
	printf("\n\n\t Taper un touche pour continuer... ");
	getch();	
	lister(eq);
	getch();
}

