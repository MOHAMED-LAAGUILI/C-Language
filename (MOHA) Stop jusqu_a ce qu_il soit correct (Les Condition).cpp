#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
int main(){
	
	char m[20];
	int et;
	et:
	printf("\n\t >>Entre mot de pass :");
	scanf("%s",&m);
	if (strcmp(m,"Secret")==0 || strcmp(m,"secret")==0)
	exit(0);
	else
	goto et;
			
	getch();
}
// MOHAMED LAAGUILI

