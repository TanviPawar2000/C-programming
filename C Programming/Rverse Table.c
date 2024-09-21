#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Cnt=0;
    printf("\n Enter a Number:");
    scanf("%d",&No);

    printf("\n Reverse Table of %d is=>\n,No");
    for(Cnt=10;Cnt>=1;Cnt--)
    {
    printf("\n%3d * %-3d = %3d.",No,Cnt,(Cnt*No));
    }

    getch();
    return 0;
}
