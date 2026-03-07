class Solution:
    def minFlips(self, s: str) -> int:
        I = lambda ch, x: int(ord(ch) - ord("0") == x)
        n = len(s)
        prefix = [[0, 0] for _ in range(n)]
        suffix = [[0, 0] for _ in range(n)]

        for i in range(n):
            if (i == 0):
                prefix[i][0] = I(s[i], 1)
                prefix[i][1] = I(s[i], 0)
            else:
                prefix[i][0] = prefix[i - 1][1] + I(s[i], 1)
                prefix[i][1] = prefix[i - 1][0] + I(s[i], 0)

        ans = min(prefix[n - 1][0], prefix[n - 1][1])
        
        if n % 2 == 1:
            for i in range(n - 1, -1, -1):
                if i == n - 1:
                    suffix[i][0] = I(s[i], 1)
                    suffix[i][1] = I(s[i], 0)
                else:
                    suffix[i][0] = suffix[i + 1][1] + I(s[i], 1)
                    suffix[i][1] = suffix[i + 1][0] + I(s[i], 0)

            for i in range(n - 1):
                ans = min(ans, prefix[i][0] + suffix[i + 1][0])
                ans = min(ans, prefix[i][1] + suffix[i + 1][1])
        return ans
        