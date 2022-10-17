class Solution {
public:
    bool judgeCircle(string moves) {
        int cnt=0;
        int dnt=0;
        for(auto &c:moves){
            if(c=='U')cnt++;
            else if(c=='D')cnt--;
            else if(c=='L')dnt++;
            else dnt--;
        }
        if(cnt==0 &&dnt==0)return true;
        return false;
    }
};