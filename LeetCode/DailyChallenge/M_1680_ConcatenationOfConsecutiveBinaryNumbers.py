class Solution:
    def concatenatedBinary(self, n: int) -> int:
        MOD = 10**9 + 7
        result = 0
        for i in range(1, n + 1):
            bit_len = i.bit_length()
            result = ((result << bit_len) % MOD + i) % MOD
        return result