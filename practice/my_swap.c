#include <stdio.h>
#include <string.h>

#define LENGTH 20
#define ITEM 5

//int smallestLoc(char nam[][LENGTH], int start, int n);
//void swap(char n[][LENGTH], int loc, int newLoc);

int main()
{
    int i, j, k, l;
    char names[ITEM][LENGTH]={'\0'}, temp[LENGTH]={'\0'}, smal[20]={"zzzzzzzzzzzzzzzzzzzz"};
    for(i=0;i<ITEM;i++){
        gets(names[i]);
    }
    for(i=0;i<ITEM;i++){
        for(j=ITEM;j>0;j--){
            if(strcmp(smal, names[j])<0){
                //strcpy(smal, i);
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);

            }

        }
        k=j;
        k++;
    }
    printf("Sorted list :");
   for(k=0;k<ITEM;k++){
        puts(names[k]);
   }
    return 0;

}
