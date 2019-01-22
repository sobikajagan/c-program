#include <stdio.h>

int main(void) {
 int a[100],n,i,j;
 scanf("%d",&n);
 for (i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 printf("\n");
 for(i=0;i<n-1;i++)
 {
   for(j=i+1;j<=n;j++)
   {
     if(a[i]==a[j])
     {
     
       printf("%d",a[i]);
       goto k;
     }
       
   }
 }
 k:
  return 0;
}
