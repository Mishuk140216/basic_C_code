#include <stdio.h>
int main()
{
    int sum, num;
    printf("Enter a series of positive number:\n");
    for(sum=0,num=0;num>=0;){
        sum=sum+num;
        scanf("%d", &num);
    }
    printf("the sum is %d", sum);

    return 0;
}
