#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';

    printf("\n Given Letter From E to P=>\n");

    ch-'E';

    while(ch<='P')
    {
    printf("\n %C",ch);
    ch++;
    }

    getch();
    return 0;
}


