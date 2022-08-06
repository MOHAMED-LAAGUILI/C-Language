#include <stdio.h>
#include <conio.h>


//Exercice 1:

int main(void) {

    float nbr, va;

    printf("\n\n\t\t >>> Entrer la valeur :");
    scanf("%f",&nbr);

    if (nbr >= 0)
        va = nbr;
    else
        va = -nbr;

    printf("\n\n\t\t >>> La Valeur Absolute C'est : %.1f", va);

getch();
}
//By MOHAMED LAAGUILI

