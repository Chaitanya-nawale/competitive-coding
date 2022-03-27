#include <bits/stdc++.h>
using namespace std;

#pragma region Macros
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma endregion
#define ios ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


int main()
{
    ios
    int t;
    int temp = 0;
    cin >> t;
    bool arr[t + 1] = {};
    int i = t;
    while (--t)
    {
        cin >> temp;
        arr[temp] = true;
    }
    for (; i > 0; i--)
    {
        if (!arr[i])
        {
            cout << i << endl;
        }
    }
    return 0;
}