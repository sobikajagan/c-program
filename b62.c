#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
  char a[100];
  int i,f,m;
  scanf("%s",a);
  m=strlen(a);
  for(i=0;i<m;i++)
  {
  if(a[i]=='0' || a[i]=='1')
  {
    f=1;
  }
  else 
  {
    f=0;
    break;
  }
  }
  if(f==1)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  
	return 0;
}
