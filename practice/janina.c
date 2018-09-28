#include <stdio.h>
#include <stdlib.h>

int smallestLoc(int [], int start, int n);
void swap(int arr[], int loc, int newLoc);

#define N 5

int main()
{
    int arr[N] = {10, 2, 70, 6, 9};
    int loc, newLoc, i;


    for(i=0; i<N; i++)
    {
        loc = N-i-1;
        newLoc = smallestLoc(arr, 0, N-i);
        swap(arr, loc, newLoc);
    }

    for(i = 0; i < N; i++)
        printf("%d  ", arr[i]);

    return 0;
}

int smallestLoc( int a[], int start, int n )
{
    int location, i, min = 555555;

    for ( i = start; i < n; i++ )
    {
        if( min > a[i] )
        {
            min = a[i];
            location = i;
        }
    }//end for

    return location;
}
