#include<stdio.h>
int main()
{
    int i,n,a[100],p;
    printf("How many number :\n");
    scanf("%d",&n);
    printf("Enter number:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Enter position to insert :\n");
        scanf("%d",&p);
        if(p<0||p>n)
            printf("Insert is impossible\n");
        else
        {
            for(i=n-1;i>=p;i--)
                a[i+1]=a[i];
            printf("Enter any number to insert:\n");
            scanf("%d",&a[p]);
            n++;
        }
        printf("After insert array contain :\n");
        for(i=0;i<n;i++)
            printf("%5d",a[i]);
        return 0;
}
