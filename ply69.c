#include <stdio.h>
#include <string.h>

int main(void) {
	int a[10],b,i,n;
  scanf("%d\t%d",&n,&b);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-b;i++)
  {
    printf("%d\t",a[i]);
  }
	return 0;
}
