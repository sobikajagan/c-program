#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  int n,a,b,t,s=0,i;
   scanf("%d\t%d\t%d",&n,&a,&b);
 for(i=1;i<=n;i++)
 {
   t=a+(i-1)*b;
   s=s+t;
 }
  printf("%d",s);
     return 0;
}
