#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0, C=0, Cnt=0;

    printf("\n Enter Row and Column :");
    scanf("%d",&Cnt);    ///6

    printf("\n ***** Pattern ***** \n\n");

    for(R=1; R <=Cnt; R++)
    {
        for(C=1;C<= Cnt; C++)
        {
            if( R>=0)
            {
              printf(" * ");
            }
            else
            {
                printf("  ");
            }
         }
         printf("\n");
      }

      getch();
      return 0;
}
