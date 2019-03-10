#include<stdio.h>
#include<string.h>
int main()
{
int a,n,i,j;
scanf("%d",&a);
for(i=2;i<=a;i++)
{
  if(a%i==0)
  {
    if(i%2==0)
    {
    printf("%d\t",i);
    }
  }
}
  
 return 0;
 }
 
