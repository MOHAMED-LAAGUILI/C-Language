#include<conio.h>
#include<stdio.h>

                                                                       
main(){
	int ned,
	scp = 0,
	c = 1,
	i = 1;
	printf("\n\t\t\t SOMME DES CARREE PARFAIT :");
	
	
	do{
		printf("\n\n \t Entrez La Nombre De Deparet : ");
		scanf("%d",&ned);
	}while(ned<=17);                    
	
	while(i<=23){
		if(c*c>=ned){
			printf("\n %d", c*c);
			scp += c*c;
			i++;
		}
		c += 1;
	}
	printf("\n\t La Somme : %d ", scp);
	
	
	getch();
	return 0;
}
