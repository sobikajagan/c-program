#include <stdio.h>

int main(void) {
 int a,i,n,c;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
   c=n%i;
   if(c==0)
   {
     printf("%d\t",i);
   }
 }
  return 0;
}
