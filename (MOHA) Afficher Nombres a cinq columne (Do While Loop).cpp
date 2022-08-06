#include<stdio.h>
#include<conio.h>

main(){
     int a=0;

     do{
        printf("\t %d", a);
        a ++;
        if( a % 5 == 0){
        	printf("\n");
		} 
        }while(a <= 375);
      getch();
      return 0;
     }
     
// MOHAMED LAAGUILI
