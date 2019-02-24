#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
  int n,r,c;
  scanf("%d",&n);
  while(n>0)
  {
    r=n%10;
    printf("%d",r);
    n=n/10;
  }
	return 0;
}
