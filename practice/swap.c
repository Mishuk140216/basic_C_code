#include <stdio.h>
#include <string.h>

#define LENGTH 20
#define ITEM 5

int smallestLoc(char nam[][LENGTH], int start, int n);
void swap(char n[][LENGTH], int loc, int newLoc);

int main()
{
    int i;
    char names[ITEM][LENGTH] = {'\0'};

    for (i = 0; i < ITEM; i++)
        gets(names[i]);

    for ( i = 0; i < ITEM; i++)
        swap(names, i, smallestLoc(names, i, ITEM));

    printf("Sorted List:: \n");
    for (i = 0; i < ITEM; i++)
        puts(names[i]);

    return 0;
}


int smallestLoc( char nam[][LENGTH], int start, int n )
{
    int location=0, i;
    char min[LENGTH] = {"ZZZZZZZZZZZZZZZZZZZ"};

    for ( i = 0; i < n; i++ )
    {
        if( strcmp(min, nam[i]) < 0 )
        {
            strcpy(min, nam[i]);
            location = i;
        }
    }//end for

    return location;
}

void swap(char n[][LENGTH], int loc, int newLoc)
{
    char temp[LENGTH]={'\0'};

    strcpy(temp, n[loc]);
    strcpy(n[loc], n[newLoc]);
    strcpy(n[newLoc], temp);
}

