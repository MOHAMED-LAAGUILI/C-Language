#include<stdio.h>
#include<conio.h>
#include<locale.h>


float hm,th,s;

main()
{
    setlocale(LC_ALL,"fra");
    printf("\n\n\t\t\t - La calculation de la salaire d'un employés:");
    printf("\n\n\t »»Nombre d'heure par moins:");
    scanf("%f",&hm);
    printf("\n\n\t »»Le taux horaire:");
    scanf("%f",&th);
    s=hm*th;
    printf("\n\n\t »»Le salaire c'est:%.2f dh", s);
    getch();
}

