#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
int a[10],n,i,l,s;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
l=s=a[0];
for(i=1;i<n;i++)
{
  if(a[i]>l)
  {
    l=a[i];
  }
  if(a[i]<s)
  {
    s=a[i];
  }
}
printf("%d\t%d",s,l);


     return 0;
}
