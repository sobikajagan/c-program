#include <stdio.h>

int main(void) {
 int n,i=0,k=1,j=0,a[100];
 scanf("%d",&n);
 while(n)
 {
   j=j+((n%10)*k);
   k=k*2;
   n=n/10;
   
 }
 printf("%d",j);
 
  return 0;
}
