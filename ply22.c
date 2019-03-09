#include <stdio.h>
#include <string.h>

int main(void) {
int a,b,n,i;
scanf("%d\t%d",&a,&b);
for(i=2;i<b;i++)
{
  if(a%i==0 && b%i==0)
  {
    n=i;
  }
}
printf("%d",n);
  return 0;
}
