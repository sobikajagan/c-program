#include <stdio.h>
#include <string.h>

int main(void) 
{
  int n,a,b;
  scanf("%d\t%d\t%d",&n,&a,&b);
  if(n>=a && n<=b)
  {
    printf("yes");
  }
  else 
  {
    printf("no");
  }
  return 0;
}
