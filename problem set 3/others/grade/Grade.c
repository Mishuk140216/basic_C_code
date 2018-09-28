#include <stdio.h>
#include <conio.h>
int main ()
{
    int s,avg,m1,m2,m3,m4,m5;

    for (s=1; s<=10; s++){
        printf ("\nEnter the 5 test scores of student %d\n", s);
        scanf ("%d %d %d %d %d", &m1,&m2,&m3,&m4,&m5);
        avg = (m1+m2+m3+m4+m5)/5;
        if (avg>=90) printf ("Grade is 'A'");
        else if (avg>=80 && avg<90)printf ("\nGrade is 'B'\n");
        else if (avg>=70 && avg<80)printf ("\nGrade is 'C'\n");
        else if (avg>=60 && avg<70)printf ("\nGrade is 'D'\n");
        else if (avg>=50 && avg<60)printf ("\nGrade is 'E'\n");
        else printf ("\nGrade is 'F'\n");
    }



    return 0;
}
