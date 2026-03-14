#include<stdio.h>
void main()
{
  int n;
  long fact=1;
  printf("Enter a number:");
  scanf("%d",&n);
  while(n>0)
{
  fact=fact*n;
  n--;
}
printf("factorial=%d",fact);
}
