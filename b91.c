#include <stdio.h>

int main(void) {
  int a,b,c,i,j,k,l;
  scanf("%d\t%d\t%d",&a,&b,&c);
  i=2*(a*b+b*c+c*a);
  j=a*b*c;
  printf("%d\t%d",i,j);
  return 0;
}
