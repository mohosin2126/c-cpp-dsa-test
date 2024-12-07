#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long pro = a * b * c;

        if (pro == 0 || m % pro != 0)
        {
            printf("-1\n");
        }
        else
        {
            long long d = m / pro;
            printf("%lld\n", d);
        }
    }

    return 0;
}
