#include <stdio.h>

int main(void) {
int n,i,a[100],k=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
  k=k+a[i];
}
printf("%d",k);

return 0;
}
