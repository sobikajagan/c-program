#include <stdio.h>

int main(void) {
  int a[100],n,i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]>a[i+1])
    {
      j=a[i];
      a[i]=a[i+1];
      a[i+1]=j;
    }
}
for(i=1;i<n;i++)
{
  printf("%d\t",a[i]);
}
  return 0;
}
