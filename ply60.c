#include <stdio.h>
#include <string.h>

int main(void) {
  char a[100],b[100];
  int i,n,j,m,s=0,g=0;
  scanf("%s\t%s",a,b);
  n=strlen(a);
  m=strlen(b);
  for(i=0;i<n;i++)
  {
      if(a[i]==b[i])
      {
       s++;
      }
     
  }
  if(s!=0)
  {
    printf("yes");
  }
  else 
  {
    printf("no");
  }
  return 0;
}
