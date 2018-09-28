 #include<stdio.h>
int main(){
  int num,temp,factor=1,sum=0,digit;

  printf("Enter a number: ");
  scanf("%d",&num);

  temp=num;
  while(temp){
      temp=temp/10;
      factor = factor*10;
  }

  printf("Each digits of given number are: ");
  while(factor>1){
      factor = factor/10;
       #include<stdio.h>
int main(){
  int num,temp,factor=1;

  printf("Enter a number: ");
  scanf("%d",&num);

  temp=num;
  while(temp){
      temp=temp/10;
      factor = factor*10;
  }

  printf("Each digits of given number are: ");
  while(factor>1){
      factor = factor/10;
      digit = num/factor;
      sum= sum+digit;
      printf("%d ",digit);
      num = num % factor;
  }
    printf ("\nSummation is %d", sum);
  return 0;
}

