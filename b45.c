#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
int n,c=0,r;
scanf("%d",&n);
while(n>0)
{
r=n%10;
n=n/10;
c++;
}
printf("%d",c);


     return 0;
}
