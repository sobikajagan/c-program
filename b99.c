#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
  int a,b,c,d;
  scanf("%d\t%d\t%d",&a,&b,&c);
  d=(a*b)%c;
  printf("%d",d);

	return 0;
}
