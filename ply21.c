#include <stdio.h>

int main(void) {
  int m=3,n=2,i,j,k,b;
  int a[m][n];
  for(i=0;i<3;i++)
  {
    for(j=0;j<2;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
   for(i=0;i<3;i++)
  {
    for(j=0;j<2;j++)
    {
      if((a[0][0]==0 &&a[1][0]==0 && a[2][0]==0)||(a[0][1]==0 &&a[1][1]==0 && a[2][1]==0))
      {
        b++;
        break;
      }
    }
  }
  if(b!=0)
  {
    printf("yes");
  }
  else
      {
        printf("no");
      }
  
  return 0;
}
