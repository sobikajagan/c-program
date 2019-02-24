#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
 int n,r,c=1;
 scanf("%d",&n);
 while(n>0)
 {
   r=n%10;
   c=c*r;
   n=n/10;
 }
 printf("%d",c);

	return 0;
}
