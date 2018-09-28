#include<stdio.h>
int facto(int);
int main()
{
    int n;
    printf("Enter a num. to find factorial:\n");
    scanf("%d",&n);

    printf("Factorial is %d",facto(n));

}
int facto( int N)
{
    int i,f=1;

    for(i=1;i<=N;i++)
        f=f*i;
    return f;
}
