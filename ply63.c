#include <stdio.h>
//#include <string.h>

int main(void) {
	int n,i,j,a[10],b[10];
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
    for(j=0;j<n;j++)
    {
		if(a[i]==b[j])
		{
			printf("%d ",a[i]);
		}
    }
	}

	return 0;
}
