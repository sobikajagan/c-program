#include <stdio.h>

int main(void) {
 int n,i=0,k,a[100];
 scanf("%d",&n);
 while(n>0)
 {
   a[i]=n%2;
   n=n/2;
   i++;
   
 }
 while(i--)
 {
   printf("%d",a[i]);
 }
 
  return 0;
}
