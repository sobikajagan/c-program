#include <stdio.h>

int main(void) {
  int a[100],n,i,j=1,m;
  scanf("%d\t%d",&n,&m);
  for(i=1;i<=m;i++)
  {
    j*=n;
  }printf("%d",j);
  return 0;
}
