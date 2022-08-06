#include <stdio.h>
#include <locale.h>
#include <conio.h>

//Exercice 3

 main()  {

    int cdc;
    int u=30, d=40, t=45, q=50 ;


//cdc = Code de Client

    setlocale(LC_CTYPE,"fra");
    printf("\n\n\n\t\t\t *** Programme de Traitement *** ");

    printf("\n\n\n\t >> Entrer Le Code De Client :");
    scanf("%d",&cdc);

    if (cdc == 1)
    printf("\n\n\t\t >>Le Prix à Payer C'est :%d DH", u);
      else if (cdc == 2)
      printf("\n\n\t\t >>Le Prix à Payer C'est :%d DH", d);
        else if (cdc == 3)
        printf("\n\n\t\t >>Le Prix à Payer C'est :%d DH", t);
          else if (cdc == 4)
          printf("\n\n\t\t >>Le Prix à Payer C'est :%d DH", q);
            else
            printf("\n\n\t\t >> Code Invalide");

    getch();
}
// By MOHAMED LAAGUILI

