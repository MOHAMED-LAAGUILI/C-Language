#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
	 int t;
	 int r;
	 int h, m, s;
	 
	 printf("\n\n\t Entrez Le TEMP en second :");
	 scanf("%d",&t);
	 
	 h = t / 3600;
	 r =  t % 3600;
	 m = r / 60;
	 s = r % 60;
	 
	 printf("\n\n\t >>> La Resultat :  \n\t %d H  %d M  %d S", h, m, s);
	 
	 getch();
	 return 0;
}
//MOHAMED LAAGUILI
 
