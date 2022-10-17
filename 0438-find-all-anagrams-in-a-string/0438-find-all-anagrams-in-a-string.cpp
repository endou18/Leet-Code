class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int ss=s.size();
        int ps=p.size();
        if(ss<ps)return {};
        vector<int> sf(26,0),pf(26,0);
        for(int i=0;i<ps;i++){
            sf[s[i]-'a']++;
            pf[p[i]-'a']++;
        }
        vector<int> ans;
        if(sf==pf)ans.push_back(0);
        for(int i=ps;i<ss;i++){
            sf[s[i-ps]-'a']--;
            sf[s[i]-'a']++;
            if(sf==pf)ans.push_back(i-ps+1);
        }
        return ans;
    }
    // vector<int> findAnagrams(string s, string p) {
    //     int i=0,j=0;
    //     string tmp;
    //     sort(p.begin(),p.end());
    //     vector<int> arr;
    //     if(s.size()<p.size())return arr;
    //     while(i<s.size()){
    //         tmp+=s[j];
    //         if(tmp.size()==p.size()){
    //             sort(tmp.begin(),tmp.end());
    //             if(tmp==p)arr.push_back(i);
    //         }
    //         if(tmp.size()>p.size() || j>=s.size()){
    //             i++;
    //             j=i-1;
    //             tmp.clear();
    //         }
    //         j++;
    //     }
    //     return arr;
    // }
};