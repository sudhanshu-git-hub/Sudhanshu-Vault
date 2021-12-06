#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {30, 35, 42, 42, 56, 24, 42, 56};
    int n = sizeof(a) / sizeof(*a);
    sort(a, a + n);
    int key;
    cin >> key;
    int *lower = lower_bound(a, a + n, key);
    int *upper = upper_bound(a, a + n, key);

    int lowerindex = lower - a;
    int upperindex = upper - a - 1;
    for (int i : a)
    {
        cout << i << ",";
    }
    cout << endl
         << "lower bound of " << key << " :" << lowerindex;
    cout << endl
         << "uper bound of " << key << " :" << upperindex;

    return 0;
}