#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
  int a,b,p;
scanf("%d\t%d",&a,&b);
p=a*b;
if(p%2==0)
printf("even");
else 
printf("odd");

return 0;
}
