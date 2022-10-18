class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string a,b,d;
        int m,n;
        for(auto &c:firstWord){
            int k=c-'a';
            a+=to_string(k);
        }
        m=stoi(a);
        for(auto &c:secondWord){
            int k=c-'a';
            b+=to_string(k);
        }
        n=stoi(b);
        for(auto &c:targetWord){
            int k=c-'a';
            d+=to_string(k);
        }
        int z=stoi(d);
        return (m+n)==z;
    }
};