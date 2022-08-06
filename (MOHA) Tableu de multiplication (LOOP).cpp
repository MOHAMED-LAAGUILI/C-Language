#include <stdio.h>
#include <conio.h>
int main ()
{
	int a, i, j;
	
	printf("\n\t >> Tableu de multiplication (0 - 10) :");
    printf("\n\t >> Entrz un nombre entre :");
    scanf("%d",&a);
    
    for(j = 0; j <= 38; j++){
    	printf("___");
	}
     for(i = 0; i <= 10; i++){
     	printf("\n\t\t %d x %d = %d \n", i, a, i*a);
	 }
    for(j = 0; j <= 38; j++){
    	printf("___");
	}
    
    
    
    
    
    
    return 0;
    getch();
}
// MOHAMED LAAGUILI
