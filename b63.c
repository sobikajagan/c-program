#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{

int a[100],n=10,i,s;
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
   s=a[0];
  for(i=1;i<n;i++)
  {
 
  if(s>a[i])
  {
    s=a[i];
  }}
  printf("%d",s);
	return 0;
}
