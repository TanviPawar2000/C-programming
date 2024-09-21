#include<stdio.h>
#include<conio.h>
int main()
{


      int R,C=0,Cnt=0;

      printf("\n Enter Row & Column:");
      scanf("&d",&Cnt);     ///9

      printf("\n ***** Pattern ***** \n\n");

      for(R=1;R<=Cnt;R++)
      {
          if( (R+C) > Cnt)
          {
               printf(" * ");
          }
          else
          {
               printf( "" );
          }
       }
       printf("\n");

    printf("\n ===== Thanks ===== \n");

     getch();
     return 0;
}
