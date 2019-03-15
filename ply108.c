#include <stdio.h>

int main(void) {
int a[100],n,i,j,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);

}
for(i=0;i<n;i++)
{
  c=c+a[i];
  printf("%d\t",c);
}
  return 0;
}
