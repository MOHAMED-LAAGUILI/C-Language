#include<stdio.h>
#include<locale.h>
#include<conio.h>

main()
{
    setlocale(LC_CTYPE,"fra");
    float ba, da, ra, is;
    const float tva=0.35;
    printf("\n\n\t\t\t --Impôt sur la société :--");
    printf("\n\n\t >> Les dépenses annuelles :");
    scanf("%f",&da);
    printf("\n\n\t >> Les recettes annuelles :");
    scanf("%f",&ra);
    ba=ra-da;
    is=ba*tva;
    printf("\n\n\t >> La bénéfice annuel : %.2f", ba);
    printf("\n\n\t >> L'imôpt sur la société c'est : %.2f", is);
    getch();
}

