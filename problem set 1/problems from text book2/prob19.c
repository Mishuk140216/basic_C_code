#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,sum1,sum2,term1,term2,term3,term4;
    printf("Enter the first 12 digit of an EAN:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d"
          "%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l);
    sum1=b+d+f+h+j+l;
    sum2=a+c+e+g+i+k;
    term1=sum1*3+sum2;
    term2=term1-1;
    term3=term2%10;
    term4=9-term3;
    printf("Check digit: %d", term4);


    getch();
    return 0;
}
