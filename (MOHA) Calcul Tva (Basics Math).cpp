#include<stdio.h>
#include<conio.h>
main()
{
    float tht,ttc;
    const float tva=1.2;

    printf("\n\n\t\t\t calculs de la TVA:");
    printf("\n\n\t entre le total hors taxes:");
    scanf("%f",&tht);
    ttc=tht*tva;
    printf("\n\n\t >> la somme de facture c'est: %.2f", ttc);
    getch();
}

