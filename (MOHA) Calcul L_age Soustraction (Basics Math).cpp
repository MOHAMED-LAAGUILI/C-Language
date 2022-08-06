#include<stdio.h>
#include<conio.h>

main()
{
    int an, aa, r;
    printf("\n\n\t\t\t calculation de l'age:");
    printf("\n\n\t Entre l'annee actuelle:");
    scanf("%d",&aa);
    printf("\n\n\t Entre l'annee de naissance:");
    scanf("%d",&an);
    int age=aa-an;
    printf("\n\n\t l'age de la persone:%d ans",age);
getch();
}

