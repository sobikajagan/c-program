#include <stdio.h>
#include <string.h>

int main(void)
{
   int a[100],n,i,k,c=0;
   scanf("%d\t%d",&k,&n);
   for(i=0;i<k;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=0;i<k;i++)
   {
     if(a[i]==n)
     {
       c=1;
       break;
     }
   }
   if(c==1)
   {
    printf("yes");
   }
   else 
    {
     printf("no");
    }
  return 0;
}
