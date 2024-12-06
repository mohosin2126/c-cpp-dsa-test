#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int a, b;
    int *px = &a;
    int *py = &b;

    scanf("%d %d", px, py);

    int difference = abs(*px - *py);

    printf("%d\n", difference);

    return 0;
}