#include <stdio.h>
#include <string.h>



int main()
{
    char str[100]="I read in Khulna University";
	char replace[10]={'\0'}, replaceWith[10]={'\0'};
	char wordMatrix[20][20]={'\0'};
	int noOfWords = 0;

	puts(str);
	int i = 0, j = 0, k = 0;

	while ( 1 )
	{
		if( str[k] == ' ' )
		{
			j = 0;
			i++;
		}
		else
		{
			wordMatrix[i][j++] = str[k];
			if( str[k] == '\0' ) break;
		}
		k++;
	}
	gets(replace);
 	gets(replaceWith);

	int x, y;
	for(x = 0; x <= k; x++) {
		if( strcmp(wordMatrix[x], replace) == 0 )
		{
			for(y=0; y<strlen(replaceWith); y++)
			{
				wordMatrix[x][y] = replaceWith[y];
			}
			wordMatrix[x][y] = '\0';
		}//end if
	}//end for

	for(k = 0; k <= i; k++)
	{
		printf("%s ", wordMatrix[k]);
	}
	printf("\n");

    return 0;
}//end main

