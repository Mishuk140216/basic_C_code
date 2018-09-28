#include <stdio.h>
int main()
{
    char sure;

    while(sure!='Y' && sure!='y'){
        printf("\nAre you sure want to quit? \n");
        sure=getche();
    }

    return 0;
}
