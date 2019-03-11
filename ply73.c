#include <stdio.h>

int main(void) {
  int a[100],n,i,j,m=0;
  scanf("%d\t%d",&n,&m);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]==m)
    {
       printf("%d\t",i);
    }
  }
  return 0;
}
