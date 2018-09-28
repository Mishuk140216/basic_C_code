#include<stdio.h>
int max(int o,int p);
int main()
{
    int a,b,R;
    printf("Enter 2 integer:\n");
    scanf("%d%d",&a,&b);
    R=max(a,b);
    printf("Maxima is %d",R);
}
int max(int i,int j)
{
    int result;
    if(i<j)
    result=j;
    else
        result=i;
    return result;
}
