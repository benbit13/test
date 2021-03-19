#include <stdio.h>
#include <stdbool.h>
#include "Exercise_6_String_Array.c"
#include "Exercise_6_String_Array.h"

int main()
{
    //char w[] = "Hallo";
    while(1==1){
    char w[128] = {0};
    printf("\nEnter String: ");
    fgets(w, 128, stdin);
    int l = 0;
    if(w[0]=='y'){break;}
    for (int i = 0; i < 128; i++)
    {
        if (w[i] != 0)
        {
            l++;
        }
        else
        {
            break;
        }
    }
    // printf("%i  ", l);
    char s, b;
    int j = processString(w, &s, &b);
    printf("length = %i,  ", j);
    printf("minChar = %c  ,  ", s);
    printf("maxChar = %c,  ", b);

    }
    return 0;
}
