#include<stdio.h>
#include<string.h>
int main()
{
int a[10],n,i,j,k,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
  {
    for(k=j+1;k<n;k++)
    {
      if(a[i]<a[j] && a[j]<a[k])
      {
        c++;
      }
    }
  }
}
printf("%d",c);
 return 0;
}
