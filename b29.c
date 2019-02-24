#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  int h,m,n;
   scanf("%d",&n);
   h=n/60;
   m=n%60;
   printf("%d\t%d",h,m);
   
     return 0;
}
