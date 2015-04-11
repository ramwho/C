#include <stdio.h>

int calculateStringLength(char* str)
{
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
    
}
int checkPalindrome(char* str, int strLen)
{
    int i = 0;
    while(i < strLen/2)
    {
        if(str[i] != str[strLen-i-1]) return 0;
        i++;
        
    }
    return 1;
}
int main()
{
    char *myString;
    int strLen = -1;
    printf("Enter a string you would like to check for Palindrome: ");
    gets(myString);
    strLen = calculateStringLength(myString);
    if(strLen > 0)
    {
        printf("The string you entered is ");
        checkPalindrome(myString,strLen)? printf("a palindrome\n"):printf("not a palindrome\n");
    }
}





