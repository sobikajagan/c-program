#include <stdio.h>
#include <string.h>

int main(void) {
  char a[100],b[100];
  int i,n,j,m,s=0,g=0;
  scanf("%s\t%s",a,b);
  n=strlen(a);
  m=strlen(b);
  for(i=0;i<n-1;i++)
  {
     for(j=0;j<m-1;j++)
     {
      if(a[i]==a[0] && b[j]==a[0])
      {
       s++;
      }
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
