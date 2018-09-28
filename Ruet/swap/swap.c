#include<stdio.h>

int main(){ int x,y;
    printf("Enter two digit:\n");
scanf("%d%d",&x,&y);
printf("x=%d    y=%d\n",x,y);

  x=y+x;
    y=x-y;
    x=x-y;
    printf("x= %d  y=  %d\n",x,y);

    return 0;
}
