#include<stdio.h>
#include <math.h>

int main()
{
    long int d[2000], t, h, b, c1, c2, n, i,j;
    scanf("%ld", &n);
    for(i=0;i<n;i++){
        scanf("%ld", &d[i]);
    }
    for(i=0;i<n;i++){
        c1=0, c2=0;
        t=d[i];
        while(t>0){
            b=t%2;
            t=t/2;
            if(b==1)
                c1=c1+1;
        }
        h=0;
       for(j=0;d[i]>0;j++){
           t=d[i]%10;
           d[i]=d[i]/10;
           h=h+t*pow(16,j);
       }
        while(h>0){
            b=h%2;
            h=h/2;
            if(b==1)
                c2=c2+1;
        }
       printf("%ld %ld\n", c1, c2);

    }
    return 0;
}
