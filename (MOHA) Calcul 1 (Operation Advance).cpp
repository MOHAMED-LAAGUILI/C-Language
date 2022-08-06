#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
//Exercice:

    float a, r;
    const float m=6.5;
    setlocale(LC_CTYPE,"fra");
    printf("\n\n\n\t\t\t\t\t >>> L'afichage de l'algorithme:");
    a=(m-1.5)/(m+3.5);
    a=a*10-m;
    a=a+m;
    r=a*2+m*2-3;
    r=r/(r-a*2);
    printf("\n\n\n\t\t >> Le resultat de la valeur a c'est :%.0f", a);
    printf("\n\n\n\t\t >> Le resultat de la valeur r c'est :%.0f", r);
    getch();
}
//By MOHAMED LAAGUILI

