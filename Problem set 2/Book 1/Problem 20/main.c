#include <stdio.h>

int main()
{
    int weight;
    float height,BMI;
    printf ("Enter the weight and height\n");
    scanf ("%d%f", &weight, &height);

    BMI = (weight*703)/ (height*height);
    if (BMI >= 18.5 && BMI <= 25){
        printf ("Person's weight is optimal");
    }
    else if (BMI < 18.5 ){
        printf ("Person's underweight");
    }
     else if (BMI > 25){
        printf ("Person's  is overweight");
    }
    return 0;
}
