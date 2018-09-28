#include<stdio.h>

#define SIZE ((int)sizeof(a)/sizeof(a[0]))

int main()
{
    int i, key;

    int a[10] = {2, 5, 7, 8, 10, 11, 12, 15, 18, 20};

    //Search
    printf("\nEnter key: ");
    scanf("%d", &key);

    int flag = 0, left=0, right=SIZE-1, mid;

    i = 0;
    do
    {
        i++;
        mid = left + (right-left)/2; //5
        if(key == a[mid])
        {
            flag = 1;
            printf("\nThe key %d is found at index %d", key, mid);
            break;
        }
        else if(key > a[mid])
            left = mid + 1;
        else
            right = mid - 1;

        //printf("\nLeft %d, right %d, mid %d", left, right, mid);
    }while(left <= right);

    if( flag == 0 )
        printf("\nThe key %d is not found", key);
    else
        printf("\nComparisons %d", i);

    return 0;
}
