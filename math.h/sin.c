#include<stdio.h>
#include<math.h>
int main ()
{

    int a, b, c;
    printf("enter a number =");
    scanf("%d %d", &a, &b);
    printf("sin(%d)=%.2f \n", a, sin(a*M_PI/180));
    printf("cos(%d)=%.2f \n", a, cos(a*M_PI/180));
    printf("tan(%d)=%.2f \n", a, tan(a*M_PI/180));
    printf("cot(%d)=%.2f \n", a, 1/tan(a*M_PI/180));
    printf("sec(%d)=%.2f \n", a, 1/cos(a*M_PI/180));
    printf("cosec(%d)=%.2f \n", a, 1/sin(a*M_PI/180));
    printf("sin inverse(%.2f)=%.2f ", b, asin(b*M_PI/180));

    return main();
}



