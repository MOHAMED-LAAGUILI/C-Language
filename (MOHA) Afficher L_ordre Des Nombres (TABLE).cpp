#include<conio.h>
#include<stdio.h>
	
	
main(){
	
	
	int ten[4]={73,9,13,25};
	int e;
	
	printf("\n\t\t Les Elements Avant Le Tri : ");
	for (int i = 0; i < 4; i++){
		printf("\n\t %d", ten[i]);
	}
	
	
	
	printf("\n\t\t Les Elements Apres Le Tri : ");
	
	for (int i = 0; i < 3; i++){
		for(int j = i+1; j < 4; j++){
			if(ten[i] > ten[j]){
				e = ten[i];
				ten[i] = ten[j];
				ten[j] = e;
			}
		}
	}
	for (int i = 0; i < 4; i++){
		printf("\n\t %d", ten[i]);
	}
	
	
	getch();
}
// MOHAMED LAAGUILI

