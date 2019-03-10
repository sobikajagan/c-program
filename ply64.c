#include <stdio.h>
//#include <string.h>

int main(void) {
	int n,i,j,a[10],b,t;
	scanf("%d\t%d",&n,&b);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
  {
    if(a[i]>a[i+1])
    {
      t=a[i];
      a[i]=a[i+1];
      a[i+1]=t;
    }
  }
  for(i=0;i<n;i++)
  {
    if(a[i]<b)
    {
      printf("%d\t",a[i]);
    }
  }

	return 0;
}
