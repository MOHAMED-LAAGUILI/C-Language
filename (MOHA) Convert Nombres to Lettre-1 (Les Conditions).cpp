#include <stdio.h>
#include <locale.h>
#include <conio.h>

//Exercice 2 Version 1

int main(void) {

    int nch;
    char ntl[6];

    setlocale(LC_ALL,"fra");
    printf("\n\n\n\t\t\t\t **** Programme de convertir entre Nombre ===> Lettre :");

    printf("\n\n\t\t >>> Entrer un nombre en chiffre :");
    scanf("%d",&nch);

    if (nch == 0)
    printf("\n\n\t\t\t >> Zéro");
      else if (nch == 1)
      printf("\n\n\t\t\t >> Un");
        else if (nch == 2)
        printf("\n\n\t\t\t >> Deux");
          else if (nch == 3)
          printf("\n\n\t\t\t >> Trois");
            else if (nch == 4)
            printf("\n\n\t\t\t >> Quatre");
              else if (nch == 5)
              printf("\n\n\t\t\t >> Cinq");
                else
                printf("\n\n\t\t\t >> Nombre invalidé");
getch();
}
// By MOHAMED LAAGUILI

