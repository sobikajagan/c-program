#include<stdio.h>
int main()
{
  int i,n,s;
  scanf("%d\t%d",&n,&s);
  for(i=n;i<s;i++)
  {
    if(i%2!=0)
    {
      printf("%d\t",i);
    }
  }
  return 0;
}
