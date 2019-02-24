#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
 int a,b,c,d,s,i;
 scanf("%d\t%d\t%d",&a,&b,&c);
 s=(c*(2*a+(c-1)*b))/2;
  d=a+(c-1)*b;
  for(i=a;i<=d;i++)
  {
    if(i==d)
    {
      printf("%d",s);
    }
  }
 
	return 0;
}
