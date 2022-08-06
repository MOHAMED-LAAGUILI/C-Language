#include<stdio.h>
#include<conio.h>
int main(void)
{
int n;
char car;
	
	printf("\n\n\t\t Programme de Traitement ");

    printf("\n\n\n\t >> Entrer Le Code De Client :");
    scanf("%d",&n);

switch(n){  
    case 0:
	printf("\n\n\t >> zero ");
	break;
	case 1:
	printf("\n\n\t >> Un");
	break;
	case 2:
	printf("\n\n\t >> Deux");
	break;
	case 3:
	printf("\n\n\t >> Trois");
	break;
	case 4:
	printf("\n\n\t >> Quatre");
	break;
    default:  
        printf(" \n\n\t >> Code invalide");
				}
				printf("\n\n\t >>  : %s",car);
	getch();
	return 0;
}  
