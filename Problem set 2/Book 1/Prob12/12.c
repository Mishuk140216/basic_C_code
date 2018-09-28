#include <stdio.h>

int main()
{
    int l1,l2,w1,w2,area1,area2;
    printf ("Enter the first length width and second length width\n");
    scanf ("%d%d%d%d", &l1,&w1,&l2,&w2);
    area1= l1*w1;
    area2= l2*w2;

    if (area1>area2){
        printf ("Area 1 is greater.");
    }
    else if (area1<area2){
            printf ("Area 2 is greater.");
    }
    else if(area1=area2){
            printf ("The areas are same.");
    }
    return 0;
}
