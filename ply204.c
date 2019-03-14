#include <stdio.h>
#include<string.h>
int main(void) {
int a[100];
int l,i,n,j,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{

  if(a[i]<0)
  {
    c=c+a[i];
  }
}
printf("%d",c);
  return 0;
}
