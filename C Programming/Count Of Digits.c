#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,dCnt=0,Temp=0;

    printf("\n Enter a Number=");
    scanf("%d",&No);

    Temp=No;

    while(Temp>0)
    {
         Temp=Temp/10;
         dCnt++;
    }
    printf("\n Count Of Digits in %d=%d.",No,dCnt);


    getch();
    return 0;
}
