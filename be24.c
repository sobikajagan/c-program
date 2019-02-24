#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  int n,a[100],i,b,j;
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
  b=a[i];
  a[i]=a[j];
  a[j]=b;
  
   }
 }
 for(i=0;i<n;i++)
{
  printf("%d\t",a[i]);
}
     return 0;
}
