#include<stdio.h>
#include<conio.h>

int main()
{
    int Bill=0,B_Sum=0,i=0,B_Cnt=0;

    printf("\n Enter How Many Bills Do You Have:");
    scanf("%d",&B_Cnt);
        printf("\n\n ======*****======\n");

    for(i=1;i<=B_Cnt;i++)
    {
        printf("\nEnter Bill%d:",i);
        scanf("%d",&Bill);
        B_Sum=B_Sum+Bill;
    }
    printf("\n Sum of Given %d Bills=%d.",B_Sum);

    printf("\n\n ======*****======\n");

    getch();
    return 0;
}
