#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    int n;
    char L[10];

    printf("\n\n\n\t\t\t Programme de convertir entre Nombre to Lettre :");

    printf("\n\n\t\t >>> Entrer un nombre en chiffre :");
    scanf("%d",&n);

    if (n == 0)
    strcpy(L,"zero");

      else if (n == 1)
      strcpy(L,"Un");

        else if (n == 2)
        strcpy(L,"deux");

          else if (n == 3)
          strcpy(L,"Trois");

            else if (n == 4)
            strcpy(L,"Quatre");

              else if (n == 5)
              strcpy(L,"Cinq");
                else
                strcpy(L,"Invalid");
            printf("\n\n\t Nombre en toute lettre: %s", L);
    getch();
}
// By MOHAMED LAAGUILI

