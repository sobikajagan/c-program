#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
  int a,b,i,g,l;
  scanf("%d\t%d",&a,&b);
  for(i=1;i<=a && i<=b;++i)
  {
    if(a%i==0 && b%i==0)
    {
      g=i;
    }
  }
  l=(a*b)/g;
    printf("%d",l);
  
  return 0;
}
