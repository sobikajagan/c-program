#include <stdio.h>
#include<math.h>

int main(void) {
  int n,s,r=0,rem;
  scanf("%d",&n);
  s=n;
  while(n!=0)
  {
    rem=n%10;
    r+=rem*rem*rem;
    n=n/10;
  }
  if(s==r)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  
  return 0;
}
