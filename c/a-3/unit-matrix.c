#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, is_unit = 1;
    int matrix[100][100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0))
            {
                is_unit = 0;
            }
        }
    }

    if (is_unit)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
