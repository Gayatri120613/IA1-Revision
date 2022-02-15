#include<stdio.h>
int input()
{
  int a;
  printf("enter a number\n");
  scanf("%d", &a);
  return a;
}
int cmp(int a, int b, int c)
{
  int l;
  l=a;
  if(l<b)
  {
    l=b;
  }
  if(l<c)
  {
    l=c;
  }
  return l;
}
void output(int l)
{
  printf("the largest number is %d\n",l);
}
int main()
{
  int a, b, c, l;
  a=input();
  b=input();
  c=input();
  l=cmp(a, b, c);
  output(l);
  return 0;
}