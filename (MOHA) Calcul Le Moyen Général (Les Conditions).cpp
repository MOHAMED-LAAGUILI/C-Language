#include<conio.h>
#include<stdio.h>
#include<locale.h>

int main(void)
{
	float mg ;
	char nom[20];

	setlocale(LC_CTYPE,"fra");
    printf("\n\n\t\t\t >> Resultat d'année: ");

    printf("\n\n\t\t >> Please Enter your name : ");
    scanf("%s", nom);

    printf("\n\n\t\t >> Please Enter your Note : ");
    scanf("%f",&mg);

		if( mg < 10)
		printf("\n\n\t\t > Rattrapage");

	    else if (mg < 12 && mg >= 10)
 		printf("\n\n\t\t > Passable ");

 		else if (mg >= 12 && mg <= 14)
 		printf("\n\n\t\t > Mention ");

 		else if (mg > 14 && mg <= 16)
 		printf("\n\n\t\t > Bien ");

 		else if (mg > 16 && mg <= 18)
 		printf("\n\n\t\t > Trés bien ");

		else if (mg > 18  && mg <= 20)
 		printf("\n\n\t\t > Congrats, Excéllent Note");

 		else if ( mg > 20)
 		printf("\n\n\t\t > Moyenne Invalide");

   getch();
}

//By MOHAMED LAAGUILI

