#include<stdio.h>
int main()
{
  int i,s,n;
  scanf("%d\t%d",&s,&n);
  for(i=s;i<n;i++)
    {
    if(i%2==0)
    {
      printf("%d\t",i);
    }
    
  }
  return 0;
}
