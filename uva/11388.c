#include<stdio.h>
#include<math.h>

int main ()
{
    long long int g,l,ml,s;
    long int t,i,j,m;
    scanf("%ld", &t);
    if(t>100)
        return 0;
    for(i=0;i<t;i++){
        scanf("%lld %lld", &g, &l);
        if(g>2147483648 ||l>2147483648){
            return 0;
        }
        if(l%g==0){
            ml=l*g;
            s=sqrt(ml);
            for(j=1;j<s;j++){
                if((l%j)==g){
                    j--;
                    m=l/j;
                    printf("%ld %ld\n", j, m);
                }
                else
                    continue;
            }
        }
        else{
            printf("-1");
            continue;
        }
    }
    return 0;
}
