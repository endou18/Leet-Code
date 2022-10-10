class Solution {
public:
    vector<string> cellsInRange(string s) {
        int r1=s[1]-'0';
        int r2=s[4]-'0';
        vector<string> ans;
        for(int i=s[0]-'a';i<=s[3]-'a';i++){
            string tmp;
            tmp='a'+i;
            for(int j=r1;j<=r2;j++){
                tmp+=to_string(j);
                ans.push_back(tmp);
                tmp.pop_back();
            }
            tmp.clear();
        }
        return ans;
    }
};