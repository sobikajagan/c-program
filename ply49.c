#include<stdio.h>
#include<string.h>
int main()
{
int n,i,j,c=0;
scanf("%d",&n);
if(n>-32768 & n<32768)
{
  printf("INT");
}
else
{  
  printf("LONG");
}
return 0;
}
