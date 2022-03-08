#include <stdio.h>

void input(int *a,int *b,int *c,int *d)
{
  printf("enter two fractions:");
  scanf("%d%d%d%d",a,b,c,d);
}
void add(int a,int b,int c,int d,int *x,int *y)
{
*x=(a*d)+(b*c);
*y=b*d;
  }
  int gcd(int x, int y)
{
    if (x == 0)
        return y;
    return gcd(y % x, x);
}

void output(int a,int b,int c,int d,int x,int y)
{
  printf("the sum of two fractions is %d/%d",x,y);
}
int main()
{
  int a,b,c,d,x,y;
  input (&a,&b,&c,&d);
  add (a,b,c,d,&x,&y);
  output (a,b,c,d,x,y);
  return 0;
}
