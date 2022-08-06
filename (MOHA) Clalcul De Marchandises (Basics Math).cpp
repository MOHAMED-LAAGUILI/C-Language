#include<stdio.h>
#include<stdio.h>
#include<locale.h>

main()
{
    setlocale(LC_CTYPE,"fra");
    float mdlm, dp, pdt, tdl;
    printf("\n\n\t\t\t Changement et déchangement de marchandises:");
    printf("\n\n\t Entrer la masse de la marchandises:");
    scanf("%f",&mdlm);
    printf("\n\n\t Entrer la distance parcourue:");
    scanf("%f",&dp);
    pdt=(dp/30)*95.75;
    tdl=pdt*mdlm;
    printf("\n\n\t le prix d'un tonne c'est:%.2f DH", pdt);
    printf("\n\n\t la total de l'opération c'est:%.2f DH", tdl);

    getch();
}

