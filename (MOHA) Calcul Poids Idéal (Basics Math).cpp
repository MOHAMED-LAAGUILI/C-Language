#include<stdio.h>
#include<stdio.h>
#include<locale.h>

main()
{
    setlocale(LC_CTYPE,"fra");
    float age, t, pi;
    printf("\n\n\t\t\t  >>>>le calcul de la poids idéal:<<<<");
    printf("\n\n\t >> Entrer l'age:");
    scanf("%f",&age);
    printf("\n\n\t >> Entrer la taille en cm:");
    scanf("%f",&t);
    pi=(t-100+age/10)*0.9;
    printf("\n\n\t >> le poids en kg c'est:%.2f KG", pi);
    getch();
}

