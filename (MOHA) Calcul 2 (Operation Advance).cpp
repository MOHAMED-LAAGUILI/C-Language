#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
//Exercice:
// Dans le premier nombre de i entrer la valeur 13.
// Dans le deuxieme nombre de j entrer la valeur 27.

    int i, j, k, l;
    setlocale(LC_CTYPE,"fra");
    printf("\n\n\n\t\t\t\t\t >>> L'afichage de l'algorithme:");
    printf("\n\n\n\t\t Entrer la valeur de i:");
    scanf("%d",&i);
    printf("\n\n\n\t\t Entrer la valeur de j:");
    scanf("%d",&j);
    k=(i+j)*5;
    k=k-(i+j)*2-120;
    k=k*13-(5-7)*5;
    l=(j-i+1)*4;
    l=(l-k+50)*2-200;
    l=l*(k-3+i-j);
    printf("\n\n\n\t\t >> Le resultat de la valeur k c'est :%d", k);
    printf("\n\n\n\t\t >> Le resultat de la valeur l c'est :%d", l);
    getch();

}
//By MOHAMED LAAGUILI

