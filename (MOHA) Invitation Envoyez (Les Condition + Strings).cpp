#include<stdio.h>  
#include <string.h>
#include<locale.h>
#include<conio.h> 
   
int main(){    
  char Marie[20],Celebataire[20];
  char nf[30], ad[30], sf[30] ;
    
	setlocale(LC_CTYPE,"fra");	
	printf("\n\t\t Programme D'invitation :");

    printf("\n\n\t >> Entrer Le nom de la femme : ");
    scanf("%s",&nf);
    printf("\n\n\t >> Entrer L'adresse de la femme : ");
    scanf("%s",&ad);
    printf("\n\n\t >> Entrer La Situation familiale : ");
    scanf("%s",&sf);  
	 
  if(strcmp(sf,"Marie")==0)    
     printf("\n\t >> A madame : %s \n\t %s", nf, ad); 
  else if(strcmp(sf,"Celebataire")==0)   
     printf("\n\t >> A mademoiselle : %s \n\t %s", nf, ad);   
 getch();    
} 
