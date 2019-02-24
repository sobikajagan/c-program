#include <stdio.h>
#include<string.h>
int main() 
{
	int i,j,t=0;
	char a[100];
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("%s",a);
}
