#include<stdio.h>
#include<conio.h>

float moyenne (float Not[])
{
	float moy = 0;
	for (int i = 0; i < 8; i++){
		printf("Entrez la note N%d : ", i+1);
		scanf("%f",&Not[i]);
		moy = moy + Not[i]/8;
	}
	return(moy);
}

main()
{
	float m, Notes[8];
	m = moyenne(Notes);
	printf("La moyenne est %.2f", m);
}
