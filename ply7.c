#include <stdio.h>
#include <string.h>

int main(void) {
  char a[10],b[10];
  int i=0,j=0,l,s;
  scanf("%s",a);
  l=strlen(a);
  for(i=0;i<l-1;i++)
  {
    if(i%2==0)
    {
      s=a[i];
      a[i]=a[i+1];
      a[i+1]=s;

    }
 
  }
  printf("%s",a);
  
  return 0;
}
