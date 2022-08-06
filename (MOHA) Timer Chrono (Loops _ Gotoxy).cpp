#include<windows.h>
#include<stdio.h>
#include<conio.h>

void gotoxy(int x,int y){
            COORD m ={x,y};
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
			}                                                      
main(){
	
	gotoxy(70,3);
	
	printf("Montre Degitale");
	 for(int h = 0; h < 24; h++){
	 	for(int m = 0; m < 60; m++){
	 		for(int s = 0; s < 60; s++){
	 			
				 gotoxy(74,10);
	 	printf("%d%dH %d%dM %d%dS", h/10,h%10, m/10,m%10, s/10,s%10);
	 	Sleep(1000);
	  }
	 }
	}
	
	getch();
	return 0;	
}
	
	
	


