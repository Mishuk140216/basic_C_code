#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,row1,row2,row3,row4,column1,column2,column3,column4,diagonal1, diagonal2;
    printf("Enter the numbers form 1 to 16 in any order:");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);
    printf("\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);
    row1=a+b+c+d;
    row2=e+f+g+h;
    row3=i+j+k+l;
    row4=m+n+o+p;
    column1=a+e+i+m;
    column2=b+f+j+n;
    column3=c+g+k+o;
    column4=d+h+l+p;
    diagonal1=a+f+k+p;
    diagonal2=d+g+j+m;

    printf("Row sums:%d\t%d\t%d\t%d\n",row1,row2,row3,row4);
    printf("Column sums:%d\t%d\t%d\t%d\n",column1,column2,column3,column4);
    printf("diagonal sums:%d\t%d\n",diagonal1, diagonal2);

    getch();
    return 0;
}
