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
	printf("\n\n\t >> 30 DH");
	break;
	case 2:
	printf("\n\n\t >> 40 DH");
	break;
	case 3:
	printf("\n\n\t >> 45 DH");
	break;
	case 4:
	printf("\n\n\t >> 50 DH");
	break;
    default:  
        printf(" \n\n\t >> Code invalide");
				}
				printf("\n\n\t >>  Le prix a payer c'est : %.0f",pap);
	getch();
	return 0;
}  
