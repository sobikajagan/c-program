#include <stdio.h>

int main(void) 
{
  int n,s=0,r,t;
scanf("%d",&n);
t=n;
while(n!=0)
{
  r=n%10;
  s=s*10+r;
  n/=10;
}
if(t==s)
  printf("yes");
else 
  printf("no");
return 0;
}
