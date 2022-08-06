#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

int vi,i,j;
char vch[10];

typedef struct Statistiques{
	int nv,ne,nd,point;	
}Stat;

typedef struct Tournoi{
	char num[15],
	nom[15],pay[15],dc[15];
	Stat st;
}Tour;


main(){

	Tour T[2];
	setlocale(LC_CTYPE,"fra");
	for(i =0; i<2; i++){
		printf("Entrez Le Numero de L'équipe %d    : ", i+1);
		scanf("%s", T[i].num);
		printf("\n Entrez Le Nom de L'équipe %d    : ", i+1);
		scanf("%s", T[i].nom);
		printf("\n Entrez Le Pays de L'equipe %d   : ", i+1);
		scanf("%s", T[i].pay);
		printf("\n Entrez Date de Creation   	   : ");
		scanf("%s", T[i].dc);
		printf("\n Entrez Le nombre de Victoire    : ");
		scanf("%d",&T[i].st.nv);
		printf("\n Entrez Le nombre d'egalité 	   : ");
		scanf("%d",&T[i].st.ne);
		printf("\n Entrez Le nombre de defaites    : ");
		scanf("%d",&T[i].st.nd);
		T[i].st.point = T[i].st.nv * 3 + T[i].st.ne;
		printf("\n Total Point de cet Equipe 	 : %d", T[i].st.point);
		puts("\n__________________________________________________\n");
		}

		for(i=0;i<1;i++){
			for(j=i+1;j<2;j++){
				if(T[i].st.point<T[j].st.point){
					strcpy(vch,T[i].num);
					strcpy(T[i].num,T[j].num);
					strcpy(T[j].num,vch);
					
					strcpy(vch,T[i].nom);
					strcpy(T[i].nom,T[j].nom);
					strcpy(T[j].nom,vch);
					
					strcpy(vch,T[i].pay);
					strcpy(T[i].pay,T[j].pay);
					strcpy(T[j].pay,vch);
					
					strcpy(vch,T[i].dc);
					strcpy(T[i].dc,T[j].dc);
					strcpy(T[j].dc,vch);
					
					vi = T[i].st.nv;
					T[i].st.nv = T[j].st.nv;
					T[j].st.nv = vi;
					
					vi = T[i].st.ne;
					T[i].st.ne = T[j].st.ne;
					T[j].st.ne = vi;
					
					vi = T[i].st.nd;
					T[i].st.nd = T[j].st.nd;
					T[j].st.nd = vi;
					
					vi = T[i].st.point;
					T[i].st.point = T[j].st.point;
					T[j].st.point = vi;
				}
			}
		} 
		
		for(i=0;i<2;i++){
			printf("Equipe %d : \n Numero d'equipe: %s",i+1,T[i].num);
			printf("\n Nom d'equipe: %s",T[i].nom);
			printf("\n Pay d'equipe: %s",T[i].pay);
			printf("\n Date d'equipe: %s",T[i].dc);
			printf("\n N.Victoire d'equipe: %d",T[i].st.nv);
			printf("\n N.Egalite d'equipe: %d",T[i].st.ne);
			printf("\n N.Defaites d'equipe: %d",T[i].st.nd);
			printf("\n Point d'equipe: %d",T[i].st.point);
			puts("\n__________________________________________________\n");
		}
			getch();
	}
	
