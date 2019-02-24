#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  int s,a[100],i,b,j;
   scanf("%d",&s);
 for(i=0;i<s;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<s;i++)
 {
   for(j=i+1;j<s;j++)
   {
     if(a[i]>a[j])
  b=a[i];
  a[i]=a[j];
  a[j]=b;
  
   }
 }
 for(i=0;i<s;i++)
{
  printf("%d\t",a[i]);
}
     return 0;
}
