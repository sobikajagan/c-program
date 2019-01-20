#include <stdio.h>

int main()
{
    int a,b,c=1;
    scanf("%d\t%d",&a,&b);
  
    while(b!=0)
    {
      c=c*a;
      b--;
    }
    printf("%d",c);
   return 0;
}
