#include<stdio.h>
#include<string.h>

int main ()
{
    char a[100];
    char r[10] = {'\0'};
    char rw[10] = {'\0'};
    char wm[20][20] = {'\0'};
    int n =0, x, y, k=0, i, j;

    gets(a);
    while ( 1 )
	{
		if( a[k] == ' ' )
		{
			y = 0;
			x++;
		}
		else
		{
			wm[x][y++] = a[k];
			if( a[k] == '\0' ) break;
		}
		k++;
	}
    gets(r);
    gets(rw);
    ;
    for(i = 0; i <= k; i++) {
		if( strcmp(wm[i], r) == 0 )
		{
			for(j=0; j<strlen(rw); j++)
			{
				wm[i][j] = rw[j];
			}
			wm[i][j] = '\0';
		}
	}
	for(i = 0; i <= k; i++)
	{
		printf("%s ", wm[i]);
	}
	printf("\n");

    return 0;

}
