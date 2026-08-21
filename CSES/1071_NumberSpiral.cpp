#include <bits/stdc++.h>
using namespace std;

#pragma region Macros
#pragma GCC optimize("Ofast")

#define ios ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#pragma endregion

const long long MOD = 1e9 + 7;
int main()
{
    ios
    int t;
    cin >> t;
    long long curr, x, y, temp;
    while (t--)
    {
        cin >> x >> y;
        temp = max(x, y);
        curr = temp - 1;
        curr *= curr;
        if (temp & 1)
        {
            if (temp == x)
            {
                curr += y;
            }
            else {
                curr += (y << 1) - x;
            }
        }
        else
        {
            if (temp == y)
            {
                curr += x;
            }
            else {
                curr += (x << 1) - y;
            }
        }
        cout << curr << endl;
    }
    return 0;
}