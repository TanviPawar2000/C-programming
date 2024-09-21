#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0,C=0;

    printf("\n\n ===== ** Table in Range 4-8 ** ====== \n\n");

    for(R=1; R<=10; R++)
    {
        for(C=4; C<=7; C++);
        {
            printf(" %3d ",R*C);
        }
        printf("\n");
    }
    printf("\n\n ===== Fork Infosystem ===== \n\n");

    getch();
    return 0;
}
