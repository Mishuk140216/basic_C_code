#include<stdio.h>

int main ()
{
    int x,y,z,sq1,sq2,sq3;

    while(scanf ("%d%d%d",&x,&y,&z)==3){
              if (x==0 && y==0 && z==0) break;
              sq1=x*x;
              sq2=y*y;
              sq3=z*z;
          if (sq1==sq2+sq3 || sq2==sq1+sq3 || sq3==sq1+sq2)
                printf ("right\n");
                else  printf ("wrong\n");
    }
   return 0;
}
