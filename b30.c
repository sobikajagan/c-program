#include <stdio.h>
#include <stdlib.h>

int main(void) {
 unsigned int h,m,n,a,h1,m1;
   scanf("%d\t%d",&h,&m);
   scanf("%d\t%d",&h1,&m1);
   n=abs(h-h1);
   a=abs(m-m1);
 
    printf("%d\t%d",n,a);
 
 

  return 0;
}
