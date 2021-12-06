#include <bits/stdc++.h>
using namespace std;
bool compare(int a, int b)
{
    return a > b ? true : false;
}
int main()
{
    int a[] = {1, 3, 4, 32, 2, 3, 23, 2, 3, 21, 312, 3};
    int n = sizeof(a) / sizeof(*a);

    sort(a, a + n, compare);
    for (int i : a)
    {
        cout << i << ",";
    }
    return 0;
}