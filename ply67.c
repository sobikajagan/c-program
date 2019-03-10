#include <stdio.h>
//#include <string.h>

int main(void) {
	int n,f=1,i;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    f=f*i;
  }
  printf("%d",f);

	return 0;
}
