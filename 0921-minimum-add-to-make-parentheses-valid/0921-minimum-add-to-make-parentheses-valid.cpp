class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> st;
        int cnt=0,dnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt++;
            }
            else cnt--;
            if(cnt==-1){
                cnt++;
                dnt++;
            }
        }
        return cnt+dnt;
    }
};