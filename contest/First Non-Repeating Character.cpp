#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int fre[26] = {26};

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        int idx = ch - 'a';
        fre[idx]++;
    }

    int flag = false;

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        int idx = ch - 'a';
        if (fre[idx] == 1)
        {
            cout << ch << endl;
            flag = true;
            break;
        }
    }

    if (!flag)
    {
        cout << -1;
    }

    return 0;
}