#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
void gotoxy(int x ,int y)
{
	COORD m={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
	}
	
main()
{
	char num[4][15],mrq[4][15],tpm[4][15],vch[15];
	float cdd[4],cr[4],vr;
	int i,j;
	for (i=0;i<4;i++)
	{
		printf(" \n\n\t entrer le numero dordinateur       :");
		scanf("%s",num[i]);
		printf(" \n\n\t entrer la marque dordinateur       :");
		scanf("%s",mrq[i]);
		printf(" \n\n\t entrer le type de micro_processeur :");
		scanf("%s",tpm[i]);
		printf(" \n\n\t entrer la capacite de disque dur   :");
		scanf("%f",&cdd[i]);
		printf(" \n\n\t entrer la capacite de la RAM       :");
		scanf("%f",&cr[i]);
	}
	for(i=0;i<j;i++)
	{
		for(j=i+1;j<i;j++)
		{
			if(cr[i]<cr[j])
			{
				strcpy(vch,num[i]); 
				strcpy(num[i],num[j]);
				strcpy(num[j],vch);
				
				strcpy(vch,mrq[i]);
				strcpy(mrq[i],mrq[j]);
				strcpy(mrq[j],vch);
				
				strcpy(vch,tpm[i]);
				strcpy(tpm[i],tpm[j]);
				strcpy(tpm[j],vch);
				
				vr=cdd[i];
				cdd[i]=cdd[j];
				cdd[j]=vr;
				
				vr=cr[i];
				cr[i]=cr[j];
				cr[j]=vr;
				
			}
		}
	}
	for(i=0;i<=3;i++)
	{
		printf(" %s \t %s \t %s \t %f \t %f \n\n",num[i],mrq[i], tpm[i], cdd[i], cr[i]);
	}
}
