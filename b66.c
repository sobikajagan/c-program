#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
int n,i,j,f;
scanf("%d",&n);
for(i=2;i<n;i++)
{
 
    if(n%i==0)
    {
      f++;
      break;
    }
  
}
  if(f==0)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }

return 0;
}
