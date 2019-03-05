#include <stdio.h>
#include <string.h>

int main(void) {
  char a[10];
  int i,j,l,m;
  scanf("%[^\n]%*c",a);
  l=strlen(a);
   if(a[0]>=67 & a[0]<=122)
   {
     a[0]-=32;
    }
    for(i=0;i<l;i++)
  {
   if(a[i]==' ' && a[i+1]>=67 & a[i+1]<=122)
   {
     a[i+1]-=32;
    }
    else
    {
      if(a[i]==' ' && a[i+1]>=65 & a[i+1]<=90)
      {
        a[i+1]+=32;

      }
    }
   }
   printf("%s",a);
  return 0;
}
