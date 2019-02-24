#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
  int n,s=0,r;
scanf("%d",&n);
while(n>0)
{
  r=n%10;
  s=s+r;
  n=n/10;
}
printf("%d",s);

return 0;
}
