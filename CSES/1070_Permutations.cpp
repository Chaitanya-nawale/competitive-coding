#include <bits/stdc++.h>
using namespace std;

#pragma region Macros
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

#define ios ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#pragma endregion

int main()
{
    ios
    int t;
    cin >> t;
    if (t == 1)
    {
        cout << t << endl;
    }
    else if (t < 4)
    {
        cout << "NO SOLUTION" << endl;
    }
    else if (t == 4)
    {
        cout << "2 4 1 3" << endl;
    }
    else
    {
        for (int i = 1; i <= t; i += 2)
            cout << i << " ";
        for (int i = 2; i <= t; i += 2)
            cout << i << " ";
    }
    return 0;
}