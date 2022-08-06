#include<stdio.h>
#include<string.h>
#include<conio.h>

main()
{
	char np[5][5], vch[5];
	int p[5], enf[5], ve, i, j;
	float tf[5], vr;
	
	for(i = 0; i < 4; i++){
		printf(" Entrer Le Nom De Payer #%d : ", i+1);
		scanf("%s", np[i]);
		printf(" Entrer La Population #%d : ", i+1);
		scanf("%d",&p[i]);
		printf(" Entrer Les Taux D'enfants #%d : ", i+1);
		scanf("%f",&tf[i]);
	
		enf[i] = tf[i] * p[i];
		
		printf("Le Nombre D'enfants #%d : %d ", i+1, enf[i]); 
	}
	
	for(i = 0; i < i; i++){
		for(j = i+1; j < 4; j++){
			if (enf[i] < enf[j]){
			strcpy(vch,np[i]);
			strcpy(np[i],np[j]);
			strcpy(np[j],vch);
			
			ve = p[i];
			p[i] = p[j];
			p[j] = ve;
			
			vr = tf[i];
			tf[i] = tf[j];
			tf[j] = vr;
			
			ve = enf[i];
			enf[i] = enf[j];
			enf[j] = ve;
			}
		}
	}
	
	for(i = 0; i < 4; i++){
		printf("\n\t Le trier : \n\t %s \n\t %d  \n\t %.2f \n\t %d", np[i], p[i], tf[i], enf[i]);
	}
	for(int i = 0; i < 4; i++){
		if(p[i] > 9500000){
			printf("\n\t Les Trier Des Pays C'est Superieur a 9500000 : \n\t %s \n\t %d  \n\t %.2f \n\t %d", np[i], p[i], tf[i], enf[i]);
		}
	}

	
	getch();
	return 0;	
// MOAHMED LAAGUILI	
}
