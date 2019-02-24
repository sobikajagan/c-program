#include <stdio.h>
#include <string.h>

int main(void) 
{
  char a[100];
  int l,i,f=0;
  scanf("%s",a);
  l=strlen(a);
  for(i=0;i<l;i++)
  {
    if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
    {
      f=1;
      i++;
    }
  }
  if(f==1)
  {
    printf("yes");
  }
  else 
  {
    printf("no");
  }
  return 0;
}
