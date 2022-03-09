#include <stdio.h>
#include<math.h>
int fact(int);
int input(int *n,int *r)
{
  printf("Enter a number:\n");
  scanf("%d",n);
  printf("Enter a number:\n");
  scanf("%d",r);
}
int fact(int n)
{
  int i,f=1;
  for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int ncr(int n,int r,int *result)
{
  *result=fact(n)/(fact(r)*fact(n-r));
  return *result;
}
void output(int n,int r,int result)
{
  printf("Value of %dC%d = %d",n,r,result);
}
int main()
{
  int n,r,result;
  input(&n,&r);
  ncr(n,r,&result);
  output(n,r,result);
  return 0;
}