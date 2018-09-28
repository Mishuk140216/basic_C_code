#include<stdio.h>

int main ()
{
    long int i, j, mn, mx, t=0;
    scanf("%d ", &mn);
    scanf("%d ", &mx);

    for(i=mn;mx>i;i++){
        for(j=0;i>1;j++){
            if(i%2==0){
                i=i/2;
                //printf("%d\n", i);
            }
            else{
                i=i*3+1;
                //printf("%d\n", i);
            }
        }
        if(j>t){
            t=j;
        }
    }
    printf("%ld\n", t);
    return 0;

}
