#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
  
  int n,i,r,s=0;
  scanf("%d",&n);
  for(i=0;n>0;i++)
  {
    r=n%10;
    s=(s*10)+r;
    n=n/10;
  }
printf("%d",s);

  
  
     return 0;
}
