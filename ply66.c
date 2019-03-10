#include <stdio.h>
//#include <string.h>

int main(void) {
	int n,i,j,a[10],b,t=1;
	scanf("%d\t%d",&n,&b);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
    if(a[i]==a[j])
    {
      t=t+1;
      
    }
    }
    if(t==b)
     printf("%d",a[i]);
     break;
  }


	return 0;
}
