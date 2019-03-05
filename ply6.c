#include <stdio.h>

int main(void) {
  char a[10],b[10];
  int i=0,j=0;
  scanf("%s\t%s",a,b);
  if(a[i]==a[i+1] && b[i]==b[i+1])
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  
  return 0;
}
