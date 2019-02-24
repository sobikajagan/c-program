#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  int a[100],n;
   scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);

  }
   for(int i=0;i<n;i++)
   {
     printf("%d\t%d\n",a[i],i);
     
   }
     return 0;
}
