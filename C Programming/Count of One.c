#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,zCnt=0,Dig=5,Temp=0;

    printf("\n Enter a Number=");
    scanf("%d",&No);

    Temp=No;
    while(Temp>0)
    {
         Dig=Temp%10;
         if(Dig==5)
         {
         zCnt++;
         }
         Temp=Temp/10;
     }
     printf("\n Count Of Five in %d=%d.",No,zCnt);

     getch();
     return 0;
}
