#include<stdio.h>
#include<locale.h>
#include<conio.h>

main()
{
    char nq[15], dq[15];
    float ai, ni, con, mt, mat;
    const float kwh=0.95, tva=0.14;

    setlocale(LC_CTYPE,"fra");
    printf("\n\n\n\t\t\t\t Quittance D'électricité :");
    printf("\n\n\n\t >> Numéro de quitance :");
	scanf("%s",&nq);
	printf("\n\n\n\t >> date de quittance :");
	scanf("%s",&dq);
	printf("\n\n\n\t >> Entre la ancien index :");
	scanf("%f",&ai);
	printf("\n\n\n\t >> Entre la nouvel index :");
	scanf("%f",&ni);

	con=ai-ni;
	mt=(con*kwh)*tva;
	mat=(con*kwh)+mt;

	printf("\n\n\t\t >>> Le Consomation et égal : %.2f", con);
	printf("\n\n\t\t >>> Le Montant de TVA et égal : %.2f", mt);
	printf("\n\n\t\t >>> Le Montant à Payer et égal : %.2f", mat);

    getch();
}
// MOHAMED LAAGUILI

