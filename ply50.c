#include <stdio.h>
#include<string.h>

int main(void) {
 int a,b=0,i,j;
 scanf("%d",&a);
 for(i=2;i<a;i++)
 {
   if(a%i==0)
   {
     printf("yes");
     b=1;
     break;
   }
 }
   if(b==0)
   {
     printf("no");
   }
 
  return 0;
}
