#include <stdio.h>

int main(void) {
  int n,i,a=1,b=1,k;
  scanf("%d",&n);
  printf("%d\t%d\t",a,b);
  for(i=2;i<n;i++)
  {
    k=a+b;
    a=b;
    b=k;
    printf("%d\t",k);
    
  }
  return 0;
}
