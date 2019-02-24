#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
   int a[100],c=0,n,m,i;
   scanf("%d\t%d",&n,&m);
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
     if(a[i]==m)
     {
       c++;
     }
   }
   printf("%d",c);
	return 0;
}
