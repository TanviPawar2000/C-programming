#include<stdio.h>
#include<conio.h>

int main()
{
    int R=0,C=0,SPt=0,EPt=0;

    printf("\n Enter Values To Get Tables =>\n");
    printf("\n Enter Starting Point");

    for(R=1;R<=9;R++);
    {
       for(C=SPt;C<=EPt;C++);
       {
           printf("%3d",R*C);
       }
            printf("\n");
    }
    printf("\n\n ====== Fork Infosystem ======\n\n");

    getch();
    return 0;
}
