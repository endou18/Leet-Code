class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int i;
        for(i=0;i<word1.size()and i<word2.size();i++){
            ans+=word1[i];
            ans+=word2[i];
        }
        if(word2.size()>word1.size()){
            ans+=word2.substr(i);
        }
        else if(word2.size()<word1.size()){
            ans+=word1.substr(i);
        }
        return ans;
    }
};