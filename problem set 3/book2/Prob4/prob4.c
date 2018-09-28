#include <stdio.h>
int main()
{
    int num, digit, no;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(digit=0;num%10!=0;digit++){
        no=num%10;
        num=num/10;
        if(digit==0) {
            printf("The reverse number is : ");
        }
        printf("%d", no);
    }
    printf("\n\nIt is a %d digit number.\n\n", digit);

    return 0;
}
