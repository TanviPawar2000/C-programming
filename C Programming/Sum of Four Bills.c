#include<stdio.h>
#include<conio.h>
int main()
{
    int B1=0,B2=0,B3=0,B4=0,B_Sum=0;

    printf("\n Enter 1st Bill:");
    scanf("%d",&B1);
    printf("\n Enter 2nd Bill:");
    scanf("%d",&B2);
    printf("\n Enter 3rd Bill:");
    scanf("%d",&B3);
    printf("\n Enter 4th Bill:");
    scanf("%d",&B4);

    B_Sum=B1+B2+B3+B4;

    printf("\n Sum of Given Four Bills ->%d+%d+%d+%d=%d.",B1,B2,B3,B4,B_Sum);

    printf("\n\n ======= * =======\n");

    getch();
    return 0;
}
