#include<stdio.h>

int main ()
{
    int i, j, k, n, a[16][16],cnt=0;
    long long int sum;
    while(1){
        scanf("%d", &n);
        if(n==0)
            return 0;
        if(n<=10){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                scanf("%d", &a[i][j]);
            }
        }
        cnt++;
        printf("Case %d:", cnt);
        for(k=0;k<(n+1)/2;k++){
            sum=0;
            for(i=k;i<n-k;i++){
                for(j=k;j<n-k;j++){
                    if(i==k||i==n-k-1||j==k||j==n-k-1)
                    sum+=a[i][j];
                }

            }
             printf(" %d", sum);
        }

        printf("\n");
    }
    }
}
