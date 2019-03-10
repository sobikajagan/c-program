#include <stdio.h>
#include <string.h>

int main(void) {
  
  int n,i,m;
  scanf("%d",&n);
  for(i=2;i<n;i++)
  {
    if(n%i==0)
    {
      m=n/i;
      if(m%2!=0)
      {
        printf("%d",i);
      break;
      }
    }

  }
  
  return 0;
}
