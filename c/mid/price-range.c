#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    int count = 0;
    int price;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &price);
        if (price >= x && price <= y)
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
