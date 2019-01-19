#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("vowel");
    }
    
    else if(ch=='$')
    {
        printf("invalid");
    }
    else
    {
      printf("consonant");
    }

    return 0;
}
