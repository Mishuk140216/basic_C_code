#include<stdio.h>
int main()
{
    float i, check;
    for(check=0; i>0 ;){
        printf("\nEnter a number : ");
        scanf("%f", &i);
        if(i>check){
            check=i;
        }

    }
    printf("The largest number which you entered was %g", check);

    return 0;
}
