#include <stdio.h>
 
int main()
{
   int nbr;
   
   printf("\n\t >> Entrez un entier : ");
   scanf("%d", &nbr);
   
 
      
      
      switch(nbr % 2){
      	case 1:
      		printf("\n\t >> impaire");
      		break;
      		default:
      			printf("\n\t >> paire");
	  }
     
   return 0;
}
