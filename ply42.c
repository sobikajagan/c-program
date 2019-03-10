#include<stdio.h>
#include<string.h>
int main()
{
int a[10],n,i,j,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
  {
  if(a[i]>a[j])
  {
    c=1;
    break;
  }
  }
}
if(c==1)
printf("no");
else 
printf("yes");

  return 0;
}
