#include<stdio.h>
#include<conio.h>


main()
{
    int np,nh,nf;
    float th;
    printf("\n\n\t\t\t la calculation de la somme des l'hommes est des femmes:");
    printf("\n\n\t Nombre de population:");
    scanf("%d",&np);
    printf("\n\n\t le taux d'hommes:");
    scanf("%f",&th);
    nh=np*th;
    nf=np-nh;
    printf("\n\n\t le somme des hommes est:%d",nf);
    printf("\n\n\t la somme des femmes est:%d",nh);
    getch();

}

