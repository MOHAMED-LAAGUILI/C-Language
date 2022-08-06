#include<stdio.h>
#include<conio.h>
int main()  
{  

    char a;  
  
    printf("\n\n\t\t >> Appuyez A Button : ");  
    scanf("%s",&a);  
  
    if( (a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z') )  
    {  
        printf("\n\n\t >>> %c <<< C'est Un alphabet\n", a);  
    }  
    else  
    {  
        printf("\n\n\t >>> %c <<< Ce n'est pas caractere dans les alphabet", a);  
    }  
  
    getch();
    return 0;  
} 
// MOHAMED LAAGUILI
