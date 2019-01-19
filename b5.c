#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d\t%d\t%d",&a,&b,&c);
    if(a>b && a>c)
    {
      printf("%d",a);
    }
    else if(b>c && b>a)
    {
      printf("%d",b);
    }
    else if(c>b && c>a)
    {
      printf("%d",c);
    }
    return 0;
}
