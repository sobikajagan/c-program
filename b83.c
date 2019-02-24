#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  char b;
  int a,c,d,e;
  scanf("%d\t%c\t%d",&a,&b,&c);
  if(b=='/')
  {
    d=a/c;
    printf("%d",d);
  }
  if(b=='%')
  {
    e=a%c;
    printf("%d",e);
  }
  return 0;
}
