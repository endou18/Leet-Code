class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        for(int i=0;i<26;i++){
            int cnt=count(word1.begin(),word1.end(),'a'+i);
            int dt=count(word2.begin(),word2.end(),'a'+i);
            if(abs(cnt-dt)>3)return false;
        }
        return true;
    }
};