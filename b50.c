#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
int n,f=0,t;
scanf("%d",&n);
t=n;
while(t!=1)
{
  if(t%2!=0)
  {
    f=1;
    break;
  }
  t=t/2;
}
if(f==0)
{
  printf("yes");
}
if(f==1)
{
  printf("no");
}
     return 0;
}
