#include<locale.h>
#include<stdio.h>

int main(void)
{
    float pn, dn;

    setlocale(LC_CTYPE,"fra");
    printf("\n\n\t\t\t\t >> La Plus Grand Value: ");

    printf("\n\n\t\t >> Please Enter The first Number a: ");
    scanf("%f",&pn);

    printf("\n\n\t\t >> Please Enter Another Number b:");
    scanf("%f",&dn);

    if (pn >= dn)
        printf("\n\n\t\t\t >>>The Largest Value is : %.2f", pn);
    else
        printf("\n\n\t\t\t >>>The Largest Value is : %.2f", dn);
   getch();
}
// By MOHAMED LAAGUILI
