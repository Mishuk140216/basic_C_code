#include <stdio.h>
int main()
{
    int Celsius;
    float  Fahrenheit;
    for(Celsius=0; Celsius<=20; Celsius++){
        Fahrenheit=1.8*Celsius+32;
        if(Celsius==0){
            printf("Celsius\t\tFahrenheit\n");
            printf("*************************************\n");
        }
        printf("%d\t\t%.2f\n",Celsius, Fahrenheit);
    }

    return 0;
}
