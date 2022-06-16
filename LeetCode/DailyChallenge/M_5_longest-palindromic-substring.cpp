class Solution {
public:
    string longestPalindrome( string s ) {
        string palindrome = s.substr( 0, 1 );
        int maxLen = 1;
        for( int i = 0; i < s.length(); i++ )
        {
            for( int j = s.length() - 1; j >= maxLen + i; j-- )
            {
                if( s[i] != s[j] )
                {
                    continue;
                }
                if( isPalindrome( s.substr( i, j - i + 1 ) ) )
                {
                    palindrome = s.substr( i, j - i + 1 );
                    maxLen = palindrome.length();
                }
            }   
        }
        return palindrome;
    }
    
    bool isPalindrome( string s ) {
        int n = ( int ) s.length() - 1;
        int mid = ( int ) s.length() / 2;
        for( int i = 0; i <= mid; i++ )
        {
            if( s[i] != s[n - i] ) {
                return false;
            }
        }
        return true;
    }
};