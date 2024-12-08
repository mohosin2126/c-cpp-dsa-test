#include <bits/stdc++.h>

using namespace std;

void canformtriplet(int n, int s, int a[])
{
    sort(a, a + n);

    for (int i = 0; i < n - 2; ++i)
    {
        int target = s - a[i];

        int left = i + 1, right = n - 1;
        while (left < right)
        {
            int currentsum = a[left] + a[right];
            if (currentsum == target)
            {
                cout << "YES" << endl;
                return;
            }
            else if (currentsum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int n, s;
        cin >> n >> s;
        int a[n];

        for (int j = 0; j < n; ++j)
        {
            cin >> a[j];
        }

        canformtriplet(n, s, a);
    }

    return 0;
}