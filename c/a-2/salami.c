#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int maxSalami = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > maxSalami)
        {
            maxSalami = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", maxSalami - arr[i]);
    }

    return 0;
}
