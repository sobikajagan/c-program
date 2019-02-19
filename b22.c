#include <stdio.h>

int main(void)
{
int a[20],n,i,j=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
 if(a[i]>j)
 {
  j=a[i];
 }
}
printf("%d",j);
  return 0;
}
