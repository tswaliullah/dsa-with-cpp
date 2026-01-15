#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 4, 5, 6};
    list<int> l2;
    // l2 = l;
    // l2.assign(l.begin(), l.end());

    // l.push_back(99);
    // l.push_front(100);

    // cout << *next(l.begin(), 2); // index

    // l.insert(next(l.begin(), 1), 33);

    // l.erase(next(l.begin(), 2));
    // l.erase(next(l.begin(), 2), next(l.begin(), 5));

    auto it = find(l.begin(), l.end(), 3);
    if (it == l.end())
        cout << "Not Found" << endl;
    else
        cout << "Found";

    for (int val : l)
    {
        cout << val << endl;
    }

    return 0;
}