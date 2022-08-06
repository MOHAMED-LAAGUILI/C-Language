#include<stdio.h>
#include<conio.h>
#include<locale.h>
main()
{
//Exercice:

    float u, v, r;
    const float c=13.60;
    setlocale(LC_CTYPE,"fra");
    printf("\n\n\n\t\t\t\t\t\t >>> L'afichage de l'algorithme:");
    r=c+1.40;
    r=(r*2)/10;
    r=r+c+3.40;
    u=r*r-c*10-164;
    u=u-r*5;
    u=u+1;
    v=r*5-u;
    v=v/99;
    printf("\n\n\n\t\t >> Le resultat de la valeur a c'est :%.0f", r);
    printf("\n\n\n\t\t >> Le resultat de la valeur r c'est :%.0f", u);
    printf("\n\n\n\t\t >> Le resultat de la valeur r c'est :%.0f", v);
    getch();
}
//By MOHAMED LAAGUILI


