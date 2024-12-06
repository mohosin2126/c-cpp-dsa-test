#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, experience;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &experience);
        if (experience < 1)
        {
            printf("Entry-level candidate\n");
        }
        else if (experience <= 3)
        {
            printf("Junior candidate\n");
        }
        else if (experience <= 7)
        {
            printf("Mid-level candidate\n");
        }
        else
        {
            printf("Senior candidate\n");
        }
    }

    return 0;
}
