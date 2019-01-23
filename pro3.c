#include<stdio.h>
#include<string.h>

int main() {
  char a[100],b[100];
  int i,j,n,c=0;
  scanf("%s\t%s",a,b);
  n=strlen(b);
  for(i=0;i<n;i++)
  {
    for(j=0;j<i;j++);
    {
      if(a[i]!=b[j])
      {
        c++;
      }
    }
  }
    printf("%d",c);
     return 0;
}
