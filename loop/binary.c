#include<stdio.h>
 int main ()
 {
     int i,n;
     printf("Enter any desiimal number:");
     scanf("%d", &n);
     printf("Binary number is:");
     for(i=15;i>=0;i--)
        printf("%d", (n>>i)&1);
     return 0;
 }
