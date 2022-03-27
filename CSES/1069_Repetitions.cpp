#include <bits/stdc++.h>
using namespace std;

#pragma region Macros
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

#define ios ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#pragma endregion

const long long MOD = 1e9 + 7;
int main()
{
    ios
    string t;
    cin >> t;
    int maxi = 0, curr = 1;
    for (int i = 0; i < t.length() - 1; i++)
    {
        if (t[i] == t[i + 1])
        {
            curr++;
        }
        else
        {
            maxi = max(maxi, curr);
            curr = 1;
        }
    }
    maxi = max(maxi, curr);
    cout << maxi << endl;
    return 0;
}