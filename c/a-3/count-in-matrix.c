#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, m, x;
    int frequency[1001] = {0};

    scanf("%d %d %d", &n, &m, &x);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int element;
            scanf("%d", &element);
            frequency[element]++;
        }
    }

    for (int i = 0; i < x; i++)
    {
        int query;
        scanf("%d", &query);
        printf("%d\n", frequency[query]);
    }

    return 0;
}
