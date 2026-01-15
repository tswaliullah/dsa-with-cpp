#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list behibd the seen double linked list
    list<int> l;
    list<int> l2(10);
    list<int> l3(10, 3); // print wiht iterator + dereference

    // cout << l2.size();
    // for (auto it = l3.begin(); it != l3.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    list<int> l4 = {1, 2, 3, 4, 5, 6, 8};
    list<int> l5(l4);

    for (int val : l5)
    {
        cout << val << endl;
    }

    return 0;
}