#include<stdio.h>
int main()
{char string[40];
printf("Enter string to convert into lowercase:\n");
  gets(string);
  printf("upper case string is %s\n",strupr(string));
  printf("lower case string is %s\n",strlwr(string));
}
