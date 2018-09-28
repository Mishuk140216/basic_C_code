#include<stdio.h>

int main ()
{
    int grade[5], i, sum= 0;
    float av;
    for(i=0; i<5; i++)
    {
        printf("\nEnter grade %d: ", i+1);
        scanf("%d", &grade[i]);
        sum+= grade[i];
    }
    av = (float)(sum)/5.0;
    printf("\nAverage is : %f ", av);
    return 0;
}
