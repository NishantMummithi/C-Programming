#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(tolower(ch)=='a' || tolower(ch)=='e' || tolower(ch)=='i'|| tolower(ch)=='o' || tolower(ch)=='u')
    {
        printf("VOWEL");
    }
    else if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
    {
        printf("CONSONANT");
    }
    return 0;
}
