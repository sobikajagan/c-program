#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
  char a[100];
  int l,i,j,f=0;
  scanf("%s",a);
  l=strlen(a);
  for(i=0;i<l;i++)
  {
   for(j=i+1;j<l;j++)
  {        
    if(a[i]==a[j])
    {
      f++;
      break;
    }
  }
  }
    if(f!=0)
    printf("no");
    else
      printf("yes");
    
  return 0;
}
