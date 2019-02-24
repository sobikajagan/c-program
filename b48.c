#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
int a[10],n,c=0,i,s;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
  c+=a[i];
}
s=c/n;
printf("%d",s);
     return 0;
}
