#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> prefix(n);
    prefix[1] = v[1];
    for (int i = 0; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
    }

    int l = v[0];
    int r = v[n - 1];

    int sum;
    if (l == 1)
        sum = prefix[r];
    else
        sum = prefix[r] - prefix[l - 1];

    for (int i = 0; i < n; i++)
    {
        cout << prefix[i] << ' ';
    }

    return 0;
}