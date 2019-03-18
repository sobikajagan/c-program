#include <stdio.h>

int main(void) {
 int n,i=0,k,j=0,a[100];
 scanf("%d",&n);
 k=n%10;
 n=n/10;
 //printf("%d\t",k);
 while(n>0)
 {
  j=n%10;
  n=n/10;

 }
 j=j+k;
printf("%d",j);

  return 0;
}
