#include<stdio.h>
#include<conio.h>

main(){
     int a=1;

     do{
     
        printf("\t %d", a*a);
        a ++;
        if( a % 5 == 0){
        	printf("\n");
		} 
        }while(a*a < 1712);
      getch();
      return 0;
     }
     
// MOHAMED LAAGUILI
