class Solution {
public:
    char check(vector<int> &arr){
        for(int i=0;i<26;i++){
            if(arr[i]!=0)return 'a'+i;
        }
        return 'z';
    }
    string robotWithString(string s) {
        int n=s.size();
        string ans;
        vector<int> frq(26,0);
        stack<char> st;
        for(auto &c:s)frq[c-'a']++;
        for(auto &c:s){
            st.push(c);
            frq[c-'a']--;
            while(st.size()>0 && st.top()<=check(frq)){
                char tmp=st.top();
                ans+=tmp;
                st.pop();
            }
        }
        return ans;
    }
};