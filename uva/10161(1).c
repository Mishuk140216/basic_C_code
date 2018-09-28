#include<stdio.h>

int main ()
{
    long int i, j, c, n;
    while(scanf("%ld", &n)){
        if(n==0)
        return 0;
        i=1;j=1;c=1;
        while(1){
            if(c==n){
                printf("%ld %ld\n", i, j);
                break;
            }
            if(i==1 && j%2!=0){
                j++;
                c++;
                if(c==n){
                printf("%ld %ld\n", i, j);
                break;
                }
            }
            while(i!=j){
                i++;
                c++;
                if(c==n){
                printf("%ld %ld\n", i, j);
                break;
                }
            }
            if(c==n)
                break;
            while(j!=1){
                j--;
                c++;
                if(c==n){
                printf("%ld %ld\n", i, j);
                break;
                }
            }
            if(c==n)
                break;
            i++;
            c++;
            if(c==n){
                printf("%ld %ld\n", i, j);
                break;
            }
            while(j!=i){
                j++;
                c++;
                if(c==n){
                printf("%ld %ld\n", i, j);
                break;
                }
            }
            if(c==n)
                break;
            while(i!=1){
                i--;
                c++;
                if(c==n){
                printf("%ld %ld\n", i, j);
                break;
                }
            }
            if(c==n)
                break;
        }
    }
    return 0;
}
