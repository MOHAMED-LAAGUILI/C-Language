#include<conio.h>
#include<stdio.h>
#include<locale.h>

int main(void)
{
	float n1, n2, n3, n4;
	float mg;

	setlocale(LC_CTYPE,"fra");
    printf("\n\n\t\t\t >> Moyenne Générale Des Notes: ");

    printf("\n\n\t\t >> Please Enter note un  : ");
    scanf("%f",&n1);
    
    printf("\n\n\t\t >> Please Enter note Deux : ");
    scanf("%f",&n2);

	printf("\n\n\t\t >> Please Enter note Trois : ");
    scanf("%f",&n3);

	printf("\n\n\t\t >> Please Enter note Quatre : ");
    scanf("%f",&n4);
    
    mg=(n1+n2+n3+n4)/4;
    
    printf("\n\n\t\t >>>>La Moyenne Générale C'est: %.2f", mg);
    
   getch();
}

//By MOHAMED LAAGUILI

