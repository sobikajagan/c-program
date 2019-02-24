#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
int n,i,j,f;
scanf("%d",&n);
while(n%10!=0)
{
  n=n+1;
}
printf("%d",n);


return 0;
}
