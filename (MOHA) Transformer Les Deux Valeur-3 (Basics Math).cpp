# include<stdio.h>
# include<conio.h>

main()
{
	float a, b ,c;
	printf("\n\n\n\t\t\t >>Transferer les valeur<<");
	printf("\n\n\n\t >> Entrer a :");
	scanf("%f",&a);
	printf("\n\n\n\t >> Entrer b :");
	scanf("%f",&b);
	
	c=a;
	a=b;
	b=c;
	printf("\n\n >>> %.1f", a);
	printf("\n\n >>> %.1f", b);
	
	getch();
}

