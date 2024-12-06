#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, num, zeros = 0, ones = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num == 0)
        {
            zeros++;
        }
        else if (num == 1)
        {
            ones++;
        }
    }
    printf("%d %d\n", zeros, ones);

    return 0;
}
