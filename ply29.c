#include <stdio.h>
#include<string.h>
int main(void) {
 int a,b,i,s=0,j;
 scanf("%d %d",&a,&b);
 for(i=a;i<=b;i++)
 {
   for(j=2;j<=b;j++)
   {
  if(j*j==i)
  {
    s++;
  }
 }
 }
 printf("%d",s);
  return 0;
}
