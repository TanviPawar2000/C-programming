#include<stdio.h>
#include<conio.h>

int main()
{
    int R=0, C=0,Cnt=0;

    printf("\n Enter Row & Column Count:");
    scanf("%d",&Cnt);     ///


    printf("\n ***** Pattern *****\n\n");
    for(R=1; R<=Cnt; R++)      ///Row
    {
        for(C=1; C<=Cnt;C++)   ///Column
        {
          if(R==C || (R+C) == (Cnt+1))
          {
                 printf("$");
          }
          else
          {
                 printf(" ");
          }
        }
        printf("\n");
    }
    printf("\n ===== Thanks =====\n");

    getch();
    return 0;
}

