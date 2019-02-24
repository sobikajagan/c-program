#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
int a,b,c;
scanf("%d\t%d",&a,&b);
c=a-b;
if(c%2==0)
{
  printf("even");
}
else
{
  printf("odd");
}

return 0;
}
