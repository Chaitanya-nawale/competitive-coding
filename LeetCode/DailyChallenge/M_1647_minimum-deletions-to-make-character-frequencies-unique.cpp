class Solution {
public:
    int minDeletions( string s ) {
        int arr[26] = {};
        unordered_map<int,bool> alreadySet;
        int minRepeat = INT_MAX;
        int deletedCharCnt = 0;
        for( int i = 0; i < s.size(); i++ ) {
            arr[ s[i] - 'a' ]++;
        }
        for( int i = 0; i < 26; i++ ) {
            if( arr[i] != 0 ) {
                if( alreadySet[ arr[i] ] == true ) {
                    int j = arr[i] - 1;
                    while( j > 0 ) {
                        if( alreadySet[ j ] == false ) {
                            break;
                        }
                        j--;
                    }
                    if( j == 0 ) {
                        deletedCharCnt += arr[i];
                    }
                    else {
                        deletedCharCnt += arr[i] - j;
                        alreadySet[ j ] = true; 
                    }
                }
                else {
                   alreadySet[ arr[i] ] = true; 
                }
            }
        }
        return deletedCharCnt;
    }
};