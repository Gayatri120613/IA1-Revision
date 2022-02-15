#include <stdio.h>
int input(int *pa, int *pb)
{
  printf("enter two numbers\n");
  scanf("%d%d",pa, pb);
}
int add(int a, int b, int *sum)
{
  *sum=a+b;
}
int output(int a, int b, int sum)
{
  printf("the sum of %d+%d is %d",a,b,sum);
}
int main()
{
  int a, b, c;
  input(&a,&b);
  add(a,b,&c);
  output(a,b,c);
  return 0;
}