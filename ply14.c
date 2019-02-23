#include <stdio.h>
#include <string.h>

int main(void) 
{
  char a[100],l,n,i;
  int k;
  scanf("%d",&k);
  for(i=0;i<k;i++)
  {
    scanf("%c",&a[i]);
  }
  n=strlen(a);
  for(i=n-1;i>=0;i--)
  {
  if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' ||a[i]=='u')
  {
  }
  else
  {
    printf("%c",a[i]);

  }
  }

  return 0;
}
}
