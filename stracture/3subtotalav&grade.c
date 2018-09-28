#include<stdio.h>
#include<conio.h>


int main ()
{
    int i, n, ban[20], eng[20], math[20], gpa[i], total[20];
    float av[20];
    char name[20];
    printf("how many student");
    scanf("%d", &n);
    for(i=0; i<n;i++){
        scanf("%s", name);
        printf("Mark of bangla : ");
        scanf("%d", &ban[i]);
        printf("Mark of English : ");
        scanf("%d", &eng[i]);
        printf("Mark of Math : ");
        scanf("%d", &math[i]);
        int total[i] = (ban[i]+eng[i]+math[i]);
        float av[i]= total[i]/3;
        int gpa[i]=av[i]/10;
    }
    for(i=0; i<=n-1;i++){
    printf("\n Name is %s.Mark of bangla %d, "
           "Mark of English %d, Mark of Math %d, "
           "Total number %d, Average is %f and "
           "GPA is", name, ban[i], eng[i], math[i], total[i], av[i]);
    switch(gpa)
        {
          case 10:
                printf("A+");
              break;
          case 9:
                printf("A+");
              break;
            case 8:
                printf("A+");
              break;
            case 7:
                printf("A");
              break;
            case 6:
                printf("A-");
              break;
            case 5:
                printf("B");
              break;
            case 4:
                printf("C");
              break;
            case 3:
                printf("D");
              break;
             default:
                printf("F");
              break;
        }
    }
    getch ();
    return 0;
}

