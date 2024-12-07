#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, m;
    scanf("%d %d", &n, &m);
    if (n != m)
    {
        printf("NO\n");
        return 0;
    }
    int matrix[n][m];
    int isjadumatrix = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);

            if ((i == j || i + j == n - 1))
            {
                if (matrix[i][j] != 1)
                {
                    isjadumatrix = 0;
                }
            }
            else
            {
                if (matrix[i][j] != 0)
                {
                    isjadumatrix = 0;
                }
            }
        }
    }

    if (isjadumatrix)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
