#include <stdio.h>
#include <stdbool.h>
#include "Exercise_5_Palindrome.h"

int isPalindrome(char w[])
{

    
  int length = lengthOfString(w);
    int j = lengthOfString(w);
   printf("%i  ", lengthOfString(w)+1);
    for (int i = length; i > 0; i--)
    {
        if (j<0){ return 1;}
        if (tolower(w[i]) == tolower(w[i - (j)]) || w[i] == ' ' )
        {
        }
        else
        {
            return 0;
        }
        j--;
        j--;
        
    } 
    return 1; 
}
int lengthOfString(char w[])
{
    int l=0;
    for (int i = 0; i < 62; i++)
    {
        if (w[i] != 0)
        {
            l++;
        }
    }
    return l-2;
}
