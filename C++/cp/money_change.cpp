#include <bits/stdc++.h>
using namespace std;
int main()
{
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int n = sizeof(coins) / sizeof(*coins);
    vector<int> change;
    int money;
    cin >> money;
    while (money)
    {
        int *it = upper_bound(coins, coins + n, money);
        int availableNote = *(--it);
        change.push_back(availableNote);
        money = money - availableNote;
    }
    for (int i : change)
    {
        cout << i << ",";
    }
    return 0;
}
