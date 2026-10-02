#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

void InOutFast()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}

#define ForThePlot InOutFast();

signed main(void)
{
    ForThePlot;
    int n, k;
    cin >> n >> k;

    int mid = n / 2;
    if (n % 2 == 1)      // test n, not mid
    {
        mid = n / 2 + 1; // odd n has one extra odd number
    }

    int start;
    if (k > mid)
    {
        start = 2;
        for (int i = 1; i < k - mid; i++)
        {
            start += 2;
        }
    }
    else
    {
        start = 1;
        for (int i = 1; i < k; i++)
        {
            start += 2;
        }
    }

    cout << start;
    return 0;
}