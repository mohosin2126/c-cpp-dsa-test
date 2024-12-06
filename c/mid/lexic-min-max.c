#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s1[1001], s2[1001], s3[1001];

    scanf("%s %s %s", s1, s2, s3);

    char minStr[1001], maxStr[1001];
    strcpy(minStr, s1);
    strcpy(maxStr, s1);

    if (strcmp(s2, minStr) < 0)
    {
        strcpy(minStr, s2);
    }

    if (strcmp(s2, maxStr) > 0)
    {
        strcpy(maxStr, s2);
    }

    if (strcmp(s3, minStr) < 0)
    {
        strcpy(minStr, s3);
    }

    if (strcmp(s3, maxStr) > 0)
    {
        strcpy(maxStr, s3);
    }

    printf("%s\n", minStr);
    printf("%s\n", maxStr);

    return 0;
}
