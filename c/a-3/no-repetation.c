#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    int arr[100001] = {0};

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        arr[num]++;
    }

    int count = 0;
    for (int i = 1; i <= 100000; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
