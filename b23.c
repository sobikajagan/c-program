#include<stdio.h>
#include<string.h>
int main()
{
  char a[10],b[10];
  int n,k,i,s;
  scanf("%s\t%s",&a,&b);
  n=strlen(a);
  k=strlen(b);
  for(i=0;i<n;i++)
  {
      if(a[i]==b[i])
      {
        printf("%c",a[i]);
      }
      else
      {
        break;
      }
  }
  return 0;
}
