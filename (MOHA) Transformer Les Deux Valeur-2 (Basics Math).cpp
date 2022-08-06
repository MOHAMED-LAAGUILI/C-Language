#include<stdio.h>
#include<locale.h>
#include<conio.h>

main(){
    int v1, v2;
    setlocale(LC_CTYPE,"fra");

    printf("\n\n\t >> Valeur un:");
    scanf("%d",&v2);
    printf("\n\n\t >> Valeur deux:");
    scanf("%d",&v1);

    printf("\n\n\t >> valeur un et egale:%d", v1);
    printf("\n\n\t >> valeur deux est egale :%d", v2);
    getch();
}

