#include<stdio.h>
#include<string.h>
int main()
{
  
  char a[10],b[10];
  int n,m;
  scanf("%s\t%s",a,b);
  n=strlen(a);
  m=strlen(b);
  if(n>m)
  {
    printf("%s",a);
  }
  else if(m>n)
  {
    printf("%s",b);
  }
  else if(n==m)
  {
    printf("%s",a);
  }

}
