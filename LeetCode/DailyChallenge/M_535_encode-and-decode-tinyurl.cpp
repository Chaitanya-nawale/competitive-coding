class Solution {
public:
    map<string,string> urlmap;
    // Encodes a URL to a shortened URL.
    string encode( string longUrl ) {
        string tiny = "";
        do {
            tiny = "";
            for( int i = 0; i < 10; i++ ) {
               tiny += ( ( char ) ( random() % 128 ) );
            }
        } while( urlmap.find( tiny ) != urlmap.end() );
        urlmap.insert( { tiny, longUrl } );
        return "http://tinyurl.com/" + tiny;
    }

    // Decodes a shortened URL to its original URL.
    string decode( string shortUrl ) {
        string tiny = shortUrl.substr( 19, shortUrl.length() );
        return urlmap.find( tiny )->second;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));