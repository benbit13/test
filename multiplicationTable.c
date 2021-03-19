#include <stdlib.h>
#include <stdio.h>

int main()
{
    int length = 0;
    int width = 0;
    int num1 = 1;
    int num2 = 1;
    printf("Please input table width: ");
    scanf("%d", &width);
    printf("\n");
    printf("Please input table length: ");
    scanf("%d", &length);
    printf("\n");

    for (int j = length; j > 0; j--)
    {

        for (int i = width; i > 0; i--)
        {

            printf("%5d", num1);
            num1 = num1 + 1 * num2;
        }
        num2++;
        printf("\n");
        num1 = num2;
    }

    return 0;
}
