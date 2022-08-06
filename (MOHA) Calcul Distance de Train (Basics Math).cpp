#include <stdio.h>
#include <locale.h>
#include <conio.h>
float d, t, t1, t2, d1, d2, v1, v2;
char casa[5], tanger[7];

int main(void) {

    setlocale(LC_CTYPE,"fra");
    printf("\n\n\n\t\t\t\t ******* Calculs Distance et Durée Des Trains ******* ");

    printf("\n\n\t\t >> Entre le nome de la premier ville         :");
    scanf("%s", casa);
    printf("\n\n\t\t >> Entre le nome de la deuxiéme ville        :");
    scanf("%s", tanger);
    printf("\n\n\t\t >> Entre la total distance de la deux trains :");
    scanf("%f",&d);
    printf("\n\n\t\t >> Entre la vitesse de la premier train      :");
    scanf("%f",&v1);
    printf("\n\n\t\t >> Entre la vitesse de la deuxiéme train     :");
    scanf("%f",&v2);
    printf("\n\n\t\t >> Entre la Dureé de la premier train        :");
    scanf("%f",&t1);
    printf("\n\n\t\t >> Entre la la Dureé de la deuxiéme train    :");
    scanf("%f",&t2);

    t=(d1-v2*(t1-t2))/(v1+v2);
    d1=v1*t;
    d2=d-d1;

    printf("\n\n\t\t\t >>> t est egale  : %.2f", t);
    printf("\n\n\t\t\t >>> d1 est egale : %.2f", d1);
    printf("\n\n\t\t\t >>> d2 est egale : %.2f", d2);

    getch();
}

// By MOHAMED LAAGUILI

