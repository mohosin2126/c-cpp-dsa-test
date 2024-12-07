#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char str1[101], str2[101], str3[101];

    scanf("%s %s %s", str1, str2, str3);

    int length = strlen(str1);
    int operations = 0;

    for (int i = 0; i < length; i++)
    {
        char ch1 = str1[i];
        char ch2 = str2[i];
        char ch3 = str3[i];

        if (ch1 == ch2 && ch2 == ch3)
        {
            continue;
        }
        else if (ch1 == ch2 || ch2 == ch3 || ch1 == ch3)
        {
            operations += 1;
        }
        else
        {
            operations += 2;
        }
    }

    printf("%d\n", operations);

    return 0;
}
