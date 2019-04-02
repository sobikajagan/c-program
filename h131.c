#include <stdio.h>

int main(void) {
int a[100],b[100],c,d;
int n,i,j,k,max,min,s;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
k=0;
for(i=0;i<n;i++)
{
 
    b[k]=a[i];
    k++;
}
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
  {
    if(a[i]>a[j])
    {
      s=a[i];
      a[i]=a[j];
      a[j]=s;

    }
  }
}
for(i=0;i<k;i++)
{
  for(j=i+1;j<k;j++)
  {
    if(b[i]<b[j])
    {
      s=b[i];
      b[i]=b[j];
      b[j]=s;

    }
  }
}
c=0,d=0;
for(i=0;i<n;i++)
{
  if(i%2==0)
  {
  printf("%d\t",b[c]);
  c++;
  }
  else
  {
  printf("%d\t",a[d]);
  d++;
  }
}



 return 0;
}
