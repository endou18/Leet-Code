class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        if(s.size()==1){
            int z=count(words.begin(),words.end(),s);
            return z;
        }
        int cnt=0;
        for(int i=0;i<words.size();i++){
            string tmp;
            for(int j=0;j<words[i].size();j++){
                tmp+=words[i][j];
                if(tmp==s.substr(0,words[i].size()) && words[i].size()<=s.size())cnt++;
            }
        }
        return cnt;
    }
};