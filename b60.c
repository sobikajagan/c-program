#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
   int n,c=0,i;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     c=c+i;
   }
   printf("%d",c);
	return 0;
}
