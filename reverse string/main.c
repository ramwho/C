#include <stdio.h>
#include "main.h"


int main()
{
    char *myString;
    int strLen = -1;
    printf("Enter a string you would like to reverse: ");
    gets(myString);
    strLen = calculateStringLength(myString);
    if(strLen > 0)
    {
        printf("The string you entered is: %s\n",myString);
        
        reverseString(myString,strLen);
        printf("The string in reverse is : %s\n",myString);
        
        reverseWords(myString);
        printf("The words in reverse are : %s\n",myString);
        
    }
}

void reverseString(char* s,int len)
{
    int i;
    for(i = 0 ; i < len ; i++,len--)
    {
        swap(&s[i],&s[len -1]);

    }
}
void reverseWords(char* str)
{
    int len = 0, i = 0;
    char *currentLocation = str;
    char *wordStart = str;
    while(*currentLocation)
    {
        len++;
        currentLocation++;
        //printf("%s\n",currentLocation);
        
        if(*currentLocation == ' ') 
        {
            //printf("%s %d\n",currentLocation,len);
            reverseString(wordStart,len);
            len = 0;
            currentLocation++;
            wordStart = currentLocation;
        }
        
    }
}
void swap(char* x, char* y)
{
    char temp ;
    temp = *x;
    *x = *y;
    *y = temp;

}
int calculateStringLength(char* str)
{
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
    
}


