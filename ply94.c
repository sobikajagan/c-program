#include <stdio.h>

int main()
{
    int n,i,j,k,s,r,a[10],count=0;
    scanf("%d",&n);
    while(n)
    {
      r=n%10;
      a[k]=r;
      n=n/10;
      k++;
    }
    for(i=0;a[i]!='\0';i++)
    {
      for(j=i+1;a[j]!='\0';j++)
      {
        if(a[i]==a[j])
        {
          count++;
        }
      }
    }
    if(count!=0)
    printf("yes");
    else 
     printf("no");
}
