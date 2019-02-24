#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
   int a[100],c,n,m,i;
   scanf("%d\t%d",&n,&m);
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
     if(a[i]==m)
     {
      c=1;
      break;
     }
     
   }
   if(c==1)
   printf("yes");
   else
   printf("no");
	return 0;
}
