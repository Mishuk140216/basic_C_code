#include<stdio.h>

int main ()
{
    int i, j=0, k=0, n;
    while(scanf("%d", &n)){
        if(n<0)
            return 0;
            k++;
        for(i=1;i<n;){
            i=i*2;
            j++;

        }
        //if(n<i)
            //j++;
        printf("Case %d: %d\n", k, j);
        j=0;
    }

}
