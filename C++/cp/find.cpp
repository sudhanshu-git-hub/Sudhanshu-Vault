#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 4, 7, 8, 9, 3, 10};
    int n = sizeof(a) / sizeof(*a);
    int key;
    cin >> key;

    auto it = find(a, a + n, key);

    int index = it - a;
    cout << index;
}
