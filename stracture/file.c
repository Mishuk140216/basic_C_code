#include<stdio.h>
#include<conio.h>

struct student {
    char name[100];
    int roll;
    float mark;
};
void main ()
{

    struct student a[100];
    int i, n;
    FILE *ms;
    ms=fopen("e:/m.txt", "w");
    if(ms==NULL){
        printf("file can't open");
        return 0;
    }
    printf("how many student");
    scanf("%d", &n);
    for(i=0; i<=n-1;i++){
        printf("Name : ");
        scanf("%s", a[i].name);
        printf("Roll :");
        scanf("%d", &a[i].roll);
        printf("Mark :");
        scanf("%f", &a[i].mark);
    }
    for(i=0; i<=n-1;i++){
    fprintf(ms, "\n Name is %s. Roll is %d. And Mark is %f.", a[i].name, a[i].roll, a[i].mark);
    }
    fclose(ms);
    getch ();

}
