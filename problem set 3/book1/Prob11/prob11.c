#include <stdio.h>
int main()
{
    int bags, TotalBags=0, i;
    for(i=1;i<=7; i++){
        printf("\nThe bag number of %d day is: ", i);
        scanf("%d", &bags);
        TotalBags=TotalBags+bags;
        printf("\nThe total num of bages %d\n", TotalBags);
    }



    return 0;
}
