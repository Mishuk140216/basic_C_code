#include<stdio.h>

int main ()
{
    int a[100],i,j,n,f,k;
    scanf("%d", &n);
    if(n>20 || n<0)
        return 0;
    for(i=0;i<n;i++){
        for(j=0;j<10;j++){
            scanf("%d", &a[j]);
        }
    }
    printf("Lumberjacks: \n");
    for(i=0;i<n;i++){
            f=0;
        for(k=0,j=1;j<10-1;k++,j++){
            if(a[k]>a[j]){
            f=1;
            break;
            }
        }
        if(f==1)
            printf("Unordered \n");
        else
            printf("Ordered \n");
    }
    return 0;

}
