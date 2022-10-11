class Solution {
public:
    string generateTheString(int n) {
        char c='a';
        string ans;
        if(n&1){
            while(n--){
                ans+=c;
            }
        }
        else{
            n-=1;
            while(n--){
                ans+=c;
            }
            ans+='b';
        }
        return ans;
    }
};