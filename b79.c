#include <stdio.h>
#include <string.h>

int main(void) 
{
  int a,b,c;
  scanf("%d\t%d",&a,&b);
  c=a*b;
  if(a==b)
  {
    printf("yes");
  }
  else 
  {
    printf("no");
  }
  
  return 0;
}
