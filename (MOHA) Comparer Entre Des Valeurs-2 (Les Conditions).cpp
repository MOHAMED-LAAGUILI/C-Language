#include<locale.h>
#include<stdio.h>
#include<conio.h>

main()
{
	int n1, n2, n3, n4, n5;
	
	setlocale(LC_CTYPE,"fra");
	printf("\n\n\t\t\t\t\t --The Biggest & The Smallest value--");
	
    printf("\n\n\n\t\t >> Entrer La Value de Nombre 1: ");
    scanf("%d",&n1);
    printf("\n\n\n\t\t >> Entrer La Value de Nombre 2: ");
    scanf("%d",&n2);
    printf("\n\n\n\t\t >> Entrer La Value de Nombre 3: ");
    scanf("%d",&n3);
    printf("\n\n\n\t\t >> Entrer La Value de Nombre 4: ");
    scanf("%d",&n4);
    printf("\n\n\n\t\t >> Entrer La Value de Nombre 5: ");
    scanf("%d",&n5);
    
    if (n1 >= n2 && n1 >= n3 && n1 >= n4 && n1 >= n5){
    	printf("\n\n\t\t\t >>>The Bigest Value is : %d Its Exist in line number one.", n1);
    	
    }else if (n2 >= n1 && n2 >= n3 && n2 >= n4 && n2 >= n5){
    	printf("\n\n\t\t\t >>>The Bigest Value is : %d Its Exist in line number two.", n2);
    	
    }else if(n3 >= n1 && n3 >= n2 && n3 >= n4 && n3 >= n5){
    	printf("\n\n\t\t\t >>>The Bigest Value is : %d Its Exist in line number three.", n3);
    	
    }else if (n4 >= n1 && n4 >= n2 && n4 >= n3 && n4 >= n5){
    	printf("\n\n\t\t\t >>>The Bigest Value is : %d Its Exist in line number four.", n4);
			
    }else{
    	printf("\n\n\t\t\t >>>The Bigest Value is : %d Its Exist in line number five.", n5);
	}
	
	
	
    if (n1 <= n2 && n1 <= n3 && n1 <= n4 && n1 <= n5){
    	printf("\n\n\t\t\t >>>The smallest Value is : %d Its Exist in line number one.", n1);
    	
    }else if (n2 <= n1 && n2 <= n3 && n2 <= n4 && n2 <= n5){
    	printf("\n\n\t\t\t >>>The smallest Value is : %d Its Exist in line number two.", n2);
    	
    }else if (n3 <= n1 && n3 <= n2 && n3 <= n4 && n3 <= n5){
    	printf("\n\n\t\t\t >>>The smallest Value is : %d Its Exist in line number three.", n3);
    	
    }else if (n4 <= n1 && n4 <= n2 && n4 <= n3 && n4 <= n5){
    	printf("\n\n\t\t\t >>>The smallest Value is : %d Its Exist in line number four.", n4);
    	
    }else{
    	printf("\n\n\t\t\t >>>The smallest Value is : %d Its Exist in line number five.", n5);
    	}
		getch();
}
// By MOHAMED LAAGUILI    

