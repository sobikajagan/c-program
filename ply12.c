#include <stdio.h>

int main(void) {
  int a[10],b,i,j,n,t;
  scanf("%d\t%d",&n,&b);
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=1;i<=b;i++)
  {
    t=a[n-1];
    for(j=n-1;j>=0;j--)
	    {
	       a[j]=a[j-1];
	    }
       a[0]=t;
  }
  for(i=0;i<n;i++)
	{
	    printf("%d ",a[i]);
	}
  return 0;
}
