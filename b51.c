#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
int n,c,r=0;
scanf("%d",&n);
while(n>0)
{
c=n%10;
r=(r*10)+c;
n=n/10;
//printf("%d",c);
}
n=r;
	while(n!=0)
	{
		r=n%10;
     printf("%d ",r);
    n=n/10;
   
	}
     return 0;
}
