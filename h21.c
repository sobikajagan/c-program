#include<stdio.h>
#include<string.h>
int main()
{
int m,n,i,j,k,l;
scanf("%d\t%d",&m,&n);

int a[m][n],b[m][n];
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
  {
    scanf("%d",&a[i][j]);
    b[i][j]=a[i][j];
  }
}
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
  {
    if(b[i][j]==0)
    {
      for(k=i,l=0;l<m;l++)
      a[k][l]=0;
      for(k=0,l=j;k<n;k++)
      a[k][l]=0;
    }
  }
}
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
  {
    printf("%d",a[i][j]);

    
  }
  printf("\n");
}
return 0;
}
