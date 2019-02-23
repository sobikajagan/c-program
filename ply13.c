#include <stdio.h>

int main(void) {
int a,n,c,r;
scanf("%d",&a);
r=a%10;
n=a/10;
c=r*r+n*n;
printf("%d",c);

  return 0;
}
