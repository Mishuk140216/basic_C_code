#include<stdio.h>
#include<conio.h>
#include<string.h>
#define N 5
int main ()
{
    char name[20][20];
    int i, j;
    for(i=0; i<=N-1;i++){
        scanf("%s", name[i]);
    }
    for(i=0; i<N-1; i++){
        for(j=0;j<N-1-i; j++){
            if((strcmp(name[j],name[j+1]))>0){
                char temp[20]={'\0'};
                strcpy(temp,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],temp);

            }
            else
                continue;
        }
    }
    for(i=0; i<=N-1;i++){
        printf("%s\n", name[i]);
    }
}
