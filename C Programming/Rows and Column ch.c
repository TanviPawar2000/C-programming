#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0, C=0, Cnt=0;
    char ch='\0';

    printf("Enter Row & Column Count:");
    scanf("%d",&Cnt);     ///8

   printf("\n ***** Pattern ***** \n\n");

    for(ch = 'A',R=1; R<=Cnt; R++, C++)
    {
        if(R>=C)
        {
        printf(" %C ",ch);
        }
    }
    printf("\n ===== Thanks =====\n");

    getch();
    return 0;
}
