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
    int t, temp, prev = 0;
    cin >> t;
    long long total = 0LL;
    while (t--)
    {
        cin >> temp;
        total += temp < prev ? prev - temp : 0;
        prev = temp < prev ? prev : temp;
    }
    cout << total << endl;
    return 0;
}