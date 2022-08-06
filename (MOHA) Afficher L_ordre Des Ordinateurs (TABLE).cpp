#include<stdio.h>
#include<stdio.h>
#include<string.h>
	
void gotoxy(int x,int y){
            COORD m ={x,y};
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
			} 
			
	char no[3][20], tmo[3][20], mrq[3][20];
	float cdd[3], cram[3];
	char vch[20];
	float vr;
	int i, j;
	
main(){	
	for(i = 0; i <= 2; i++){
		printf("\n\t Entrer Le NUMERO de pc %d : ", i+1);
		scanf("%s",no[i]);
		printf("\n\t Entrer Le TYPE PROCESSEUR %d : ", i+1);
		scanf("%s",tmo[i]);
		printf("\n\t Entrer La MARQUE de pc %d : ", i+1);
		scanf("%s",mrq[i]);
		printf("\n\t Entrer La capacite de DISK DUR de pc %d : ", i+1);
		scanf("%f",&cdd[i]);
		printf("\n\t Entrer La capacite RAM de pc %d : ", i+1);
		scanf("%f",&cram[i]);
	}
	
	for(i = 0; i <= 1; i++){
	  for(j = i + 1; j <= 2; j++){
	    if(cram[i]<cram[j]){
	    	strcpy(vch,no[i]);
	    	strcpy(no[i],no[j]);
	    	strcpy(no[j],vch);
	    	
	    	strcpy(vch,tmo[i]);
	    	strcpy(tmo[i],tmo[j]);
	    	strcpy(tmo[j],vch);
	    	
	    	strcpy(vch,mrq[i]);
	    	strcpy(mrq[i],mrq[j]);
	    	strcpy(mrq[j],vch);
	    	
	    	vr = cdd[i];
	    	cdd[i] = cdd[j];
	    	cdd[j] = vr;
	    	
	    	vr = cram[i];
	    	cram[i] = cram[j];
	    	cram[j] = vr;	
	    }	
	  }
	}
	
	for( i = 0; i <= 2; i++ ){
			printf("\n %s \n %s \n %s %.2f %.2f \n\n ", no[i], tmo[i], mrq[i], cdd[i], cram[i]);
		}
	
	for( i = 0; i <= 2; i++ ){
		if(cram[i] > 8){
			printf("\n\n %s \n %s \n %s %.2f %.2f", no[i], tmo[i], mrq[i], cdd[i], cram[i]);
		}
	}
	

	// MOAHMED LAAGUILI
	
	
}
