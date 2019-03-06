#include <stdio.h>
#include<string.h>
int main()
{
    int a,b,i;
    scanf("%d\t%d",&a,&b);
    if(a>b)
    {
      if(a%b==0)
      {
        printf("%d",a);
      }
      else
      {
        printf("%d",a*b);
      }
    }
      else
      {
        if(b%a==0)
        {
          printf("%d",a);
        }
        else
        {
          printf("%d",a*b);
        }
      }

    
    
	return 0;
}
