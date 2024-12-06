#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, t;
    scanf("%d %d", &n, &t);
    int books[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &books[i]);
    }
    int currentTime = 0;
    int maxBooks = 0;
    for (int i = 0; i < n; i++)
    {
        currentTime = currentTime + books[i];
        if (currentTime <= t)
        {
            maxBooks++;
        }
        else
        {
            break;
        }
    }
    printf("%d\n", maxBooks);

    return 0;
}
