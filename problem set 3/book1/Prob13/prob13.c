#include <stdio.h>
int main()
{
    int budget, cost, sum;

    printf("Enter a budget for a month:");
    scanf("%d", &budget);
    printf("Enter the expenses for a month\nand If you want to finish the loop press 0\n");
    sum=0;

    for(;cost!=0;){
        scanf("%d", &cost);
        sum=sum+cost;

    }
    printf("the cost of a month is %d\n", sum);
    if(sum>budget)
        printf("The cost is over budget.");
    else if(sum<budget)
        printf("The cost is under budget.");


    return 0;
}
