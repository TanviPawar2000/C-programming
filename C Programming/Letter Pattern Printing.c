#include<stdio.h>
#include<conio.h>

int main()
{
    int R=0, C=0,Cnt=0;

    printf("\n Enter Row & Column Count:");
    scanf("%d",&Cnt);     ///5


    printf("\n ***** Pattern *****\n\n");

    for(R=i; R<=Cnt; R++)      ///Row
    {
       for(C=2; C<=Cnt; C++)   ///Column
       {
        if("R==i || C==2 || R==Cnt || ((R==Cnt/2)*i) && (C<=/2*i)) ")
        {
           printf(" * ");
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


