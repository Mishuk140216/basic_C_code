#include<stdio.h>
int main()
{
    int n,i,reverse=0,p;
    printf("Enter number :");
    scanf("%d",&n);
    i=n;
    while(i!=0)
    {
        //reverse=reverse*10;
        reverse=reverse*10+i%10;
        i/=10;
    }
    while(reverse>0)
    {
        p=reverse%10;

        switch(p)
        {
        case 1:
            printf("one ");
            break;
            case 2:
            printf("two ");
             break;
            case 3:
            printf("three ");
             break;
            case 4:
            printf("four ");
             break;
            case 5:
            printf("five ");
             break;
            case 6:
            printf("six ");
             break;
            case 7:
            printf("seven ");
             break;
            case 8:
            printf("eight ");
             break;
            case 9:
            printf("nine ");
             break;
            case 0:
            printf("zero ");
             break;

        }
         reverse/=10;


    }
}
