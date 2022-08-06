#include<math.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>

int main()
{
    int a,b,s;
    setlocale(LC_CTYPE,"fra");
    printf("\n\n\t\t\t\t HELLO TO MY PROGRAME :");
    printf("\n\n\t\ >>Print the first value :");
    scanf("%d",&a);
    printf("\n\n\t >>Print the second value :");
    scanf("%d",&b);
    s=a+b;
    printf("\n\n\t\t >>>La somme c'est : %d",s);
    return 0;
}

