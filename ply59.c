#include <stdio.h>
int main()
{
   
int n,i,k,a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
  if(a[i]==0)
  {
   
    k=i;
  }
}
  
for(i=0;i<k;i++)
{
  if(a[i]!=0)
  {
    printf("%d\t",a[i]);
  }
}
    return 0;
}
