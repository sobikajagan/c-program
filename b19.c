#include <stdio.h>
#include<math.h>

int main(void) {
  int f=1,n,i;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    f=f*i;
  }
  printf("%d",f);
  return 0;
}
