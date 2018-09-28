#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student {
    char name[100];
    int roll;
    float mark;
};
int main ()
{

    struct student a[100],temp, temp2;
    int i, j, n,k;
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
        for(j=i;j<n;j++){
            temp=temp2;
            if(a[i].mark <a[j].mark)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
    for(k=0; k<=n-1;k++){
    fprintf(ms, "\n Name is %s. Roll is %d. And Mark is %f.", a[k].name, a[k].roll, a[k].mark);
    }
    fclose(ms);
    getch ();
    return 0;
}
