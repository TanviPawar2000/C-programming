#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,Temp=0,Rev=0;

    printf("\n Enter a Number=");
    scanf("%d",&No);

    Temp=No;

    while(Temp>0)
    {
          Dig=Temp%10;
          Rev=(Rev*10)+Dig;
          Temp=Temp/10;
    }
    printf("\n Reverse Of %d=%d.",No,Rev);

    getch();
    return 0;
}
