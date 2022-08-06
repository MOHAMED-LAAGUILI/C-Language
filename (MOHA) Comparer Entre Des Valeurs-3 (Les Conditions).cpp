#include<stdio.h>
#include<conio.h>

main()
{
/////////////////////////////////////////////////////
    int n , i , max , min , Lmax , Lmin;          //
///////////////////////////////////////////////////

	i = 1;
	printf("\n\n\n\t\t >> Entrer la valeur 1: ");
	scanf("%d",&n);

	min = n;
	max = n;
	Lmin = i;
	Lmax = i;

///////////////////////////////////////////////////
	i = 2;
	printf("\n\n\n\t\t >> Entrer la valeur 2: ");
	scanf("%d",&n);
	if (n < min) {
		min = n;
		Lmin = i;

    }else if (n > max){
		max = n;
		Lmax = i;
    }
///////////////////////////////////////////////////
	i = 3;
	printf("\n\n\n\t\t >> Entrer la valeur 3: ");
	scanf("%d",&n);
	if (n < min) {
		min = n;
		Lmin = i;

    }else if (n > max){
		max = n;
		Lmax = i;
    }
///////////////////////////////////////////////////
	i = 4;
	printf("\n\n\n\t\t >> Entrer la valeur 4: ");
	scanf("%d",&n);
	if (n < min) {
		min = n;
		Lmin = i;

    }else if (n > max){
		max = n;
		Lmax = i;
    }
///////////////////////////////////////////////////
	i = 5;
	printf("\n\n\n\t\t >> entrer la valeur 5: ");
	scanf("%d",&n);
	if (n < min) {
		min=n;
		Lmin=i;

    }else if (n > max){
		max=n;
		Lmax=i;
    }
///////////////////////////////////////////////////
	printf("\n\n\n\t\t\t >>> Le Maximum Nombre C'est :%d \n ",max);
	printf("\n\n\n\t\t\t >>> Dans la Line :%d \n ",Lmax);
	printf("\n\n\n\t\t\t >>> Le Minimum Nombre C'est :%d \n ",min);
	printf("\n\n\n\t\t\t >>> Dans La Line :%d\n ",Lmin);

	getch();
}

