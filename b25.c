#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  int n,a[100],i,b,j,k;
   scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
   for(j=i;j<n;j++)
   {
     if(a[i]>a[j])
  b=a[i];
  a[i]=a[j];
  a[j]=b;
  
   }
 }
if(n%2==0)
{
  k=(a[n-1/2]+(a[n/2]))/2;
  //printf("%d",k);
}
else{
k=a[n/2];
}
  printf("%d",k);

     return 0;
}
