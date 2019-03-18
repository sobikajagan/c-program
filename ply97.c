#include <stdio.h>

int main(void) {
 int a,b,i,j=0;
 scanf("%d\t%d",&a,&b);
 for(i=a;i<=b;i++)
 {
   if(i%2!=0)
   {
     j=j+i;
   }
 }
printf("%d",j);
  return 0;
}
