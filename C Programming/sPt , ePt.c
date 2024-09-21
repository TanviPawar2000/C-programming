#include<stdio.h>
#include<conio.h>

int main()
{
    char sPt='\0',ePt='\9';

    printf("\n Enter Start Point:");
    scanf("%c",&sPt);
    printf("\n Enter End Point:");
    scanf("&C",&ePt);

    printf("\n Given Letter From %C to %C=> \n",sPt,ePt);

    while(sPt<=ePt)
    {
      printf("\n %C",sPt);
      sPt++;
    }
    printf("\n Thanks");

    getch();
    return 0;
}

