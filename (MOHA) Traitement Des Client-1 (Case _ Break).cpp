#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
int cc;
float pap;
	
	printf("\n\n\t\t Programme de Traitement ");

    printf("\n\n\n\t >> Entrer Le Code De Client :");
    scanf("%d",&cc);

switch(cc){  
    case 1:
	pap = 30;
	break;
	case 2:
	pap = 35;
	break;
	case 3:
	pap = 40;
	break;
	case 4:
	pap = 50;
	break;
    default:  
        printf(" \n\n\t >> Code invalide");
				}
				printf("\n\n\t >>  Le prix a payer c'est : %.0f",pap);
	getch();
	return 0;
}  
