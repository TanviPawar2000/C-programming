#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0;

    Up:
      printf("\n Enter a Number To Check whether it is +Ve or -Ve=");
      scanf("%d",&No);

      if(No==0)
      {
      printf("\n You Have Entered Zero,which is Neutral.");
      printf("\n Please Enter Valid Number..\n");
             goto Up;
      }

      if(No>0)
      {
      printf("\n Welcome You Have Enterd a Posistive Number");
      }
      else
      {
      printf("\n Welcome You Have Entered a Negative Number");
      }
      getch();
      printf("\n Thanks For Interacting...");
      getch();
      return 0;
}
