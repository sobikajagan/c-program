#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
  char a[1000];
  int i,f;
  scanf("%[^\n]",a);
  for(i=0;a[i]!='\0';i++)
  {
      if((a[i]>='a' && a[i]<='z')|| (a[i]>='A'&& a[i]<='Z' ))
      {
      if(a[i]>='0' && a[i]>='9')
      {
          f=1;
      }
      }
  }
	if(f==1)
	printf("Yes");
	else
	printf("No");
	return 0;
}
