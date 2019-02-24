#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
  int n,a[100],i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(i!=a[i])
    {
      printf("%d",i);
      break;
    }
  }
 
	return 0;
}
