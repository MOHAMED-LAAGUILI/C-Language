#include<stdio.h>
#include<locale.h>
#include<conio.h>

main()
{
    setlocale(LC_CTYPE,"fra");
    float ba, da, ra, is;
    const float tva=0.35;
    printf("\n\n\t\t\t --Imp�t sur la soci�t� :--");
    printf("\n\n\t >> Les d�penses annuelles :");
    scanf("%f",&da);
    printf("\n\n\t >> Les recettes annuelles :");
    scanf("%f",&ra);
    ba=ra-da;
    is=ba*tva;
    printf("\n\n\t >> La b�n�fice annuel : %.2f", ba);
    printf("\n\n\t >> L'im�pt sur la soci�t� c'est : %.2f", is);
    getch();
}

