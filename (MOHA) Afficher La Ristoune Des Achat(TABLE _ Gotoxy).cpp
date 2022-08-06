#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<locale.h>
void gotoxy(int x, int y)
{
	COORD m={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
}
main()
{
	setlocale(LC_ALL,"fra");
	
      float va[5],rst[5];
      char nomclt[10][10],tpclt[10][10];
      int i,j;
      gotoxy(31,3);
      printf("Gestion des clients");
      gotoxy(10,6);
      printf("Nom du client      :");
      gotoxy(10,9);
      printf("Type du client     :");
      gotoxy(10,12);
      printf("La valeur d'achats :");
      gotoxy(10,15);
      printf("La ristourne       :");
      for(i=0;i<5;i++)
      {
      	gotoxy(30,6);
      	scanf("%s",&nomclt[i]);
      	gotoxy(30,9);
      	scanf("%s",&tpclt[i]);
    	gotoxy(30,12);
      	scanf("%f",&va[i]);
      	
      	if(strcmp(tpclt[i],"detaillant")==0)
      	{
    		if(va[i]<3000)
    		{
            	rst[i]=0.00;
        	}
        	else
        	rst[i]=va[i]*0.015;
	  	}
      	else if (strcmp(tpclt[i],"grossiste")==0)
        {
            if(va[i]<10000)
            {
                rst[i]=0.00;
            }
			else if(va[i]<=50000)
            {
                rst[i]=va[i]*0.02;
            }
            else 
            {
                rst[i]=va[i]*0.03;
            }
        }
        gotoxy(30,15);
        printf("%.2f",rst[i]);
        gotoxy(10,18);
	  	printf("Taper sur une touche pour continuer...");
	 	getch();
	 	gotoxy(30,6);
		printf("                    ");
		gotoxy(30,9);
		printf("                    ");
		gotoxy(30,12);
		printf("                    ");
		gotoxy(30,15);
		printf("                    ");
		gotoxy(10,18);
		printf("                                                 ");
	  }
	  gotoxy(10,21);
	  printf("Nom client");
	  gotoxy(29,21);
	  printf("Type client");
	  gotoxy(49,21);
	  printf("Achats");
	  gotoxy(65,21);
	  printf("Ristourne");
	  for(i=0;i<5;i++)
      {
      	gotoxy(10,24+i*3);
      	printf("%s",nomclt[i]);
      	gotoxy(29,24+i*3);
      	printf("%s",tpclt[i]);
      	gotoxy(49,24+i*3);
      	printf("%.2f",va[i]);
      	gotoxy(65,24+i*3);
      	printf("%.2f",rst[i]);
      }
      getch();
}

