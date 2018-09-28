#include<stdio.h>

int main()
{
    int a[20000000]={0},i,total,s,sum;
    while(1){
        for(i=0,sum=0;i!=1;i++){
            scanf("%d", &a[i]);
            sum+=a[i];
            }
        if(sum==0)
            return 0;
        while(sum>9){
            for(total=0;sum!=0;){
                s=sum%10;
                sum/=10;
                total+=s;
            }
            sum=total;
        }
        printf("%d", sum);
    }
}
