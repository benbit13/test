#include <stdio.h>
#include <stdbool.h>
int processString(char word[], char *small, char *big);

/*int main()
{

    char w[] = "Hallo";
    int l = 0;

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
    printf("%i  ", l);
    char s, b;
    int j = processString(w, &s, &b);
    printf("%i  ", j);
    printf("%c  ", s);
    printf("%c", b);
    return 0;
}
*/
int processString(char word[], char *small, char *big)
{
    int l = 0;
    for (int i = 0; i < 128; i++)
    {
        if (word[i] != 0)
        {
            l++;
        }
        else
        {
            l--;
            break;
        }
    }
    char min = 'z';
    for (int i = 0; i < l; i++)
    {

        if (min < word[i])
        {
        }
        else
        {

            min = word[i];
        }
    }

    *small = min;

    char max = 'A';
    for (int i = 0; i < l; i++)
    {

        if (max > word[i])
        {
        }
        else
        {

            max = word[i];
        }
    }

    *big = max;

    return l;
}
