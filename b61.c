#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
  char a[100];
  int n,i;
  scanf("%s",a);
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("%c",a[i]);
  }
	return 0;
}
