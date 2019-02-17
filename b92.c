#include <stdio.h>
#include<string.h>

int main(void) {
 int a[100],i,n,c=1;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",a);
 }
 for(i=0;i<=n;i++)
 {
 c=c+i;
 
 }
 printf("%d",c-1);
  
   return 0;
}
