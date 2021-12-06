#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 4, 7, 8, 9, 3, 10, 2};
    int n = sizeof(a) / sizeof(*a);
    int key;
    cin >> key;
    sort(a, a + n);
    bool b = binary_search(a, a + n, key);
    if (b)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
}
