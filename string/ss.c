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
        for(j=i+1;j<N; j++){
            if((strcmp(name[i],name[j]))>0){
                char temp[20]={'\0'};
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);

            }
            else
                continue;
        }
    }
    for(i=0; i<=N-1;i++){
        printf("%s\n", name[i]);
    }
}

