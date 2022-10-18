class Solution {
public:
    vector<int> diStringMatch(string s) {
        int a=0,b=s.size();
        vector<int> arr(b+1);
        for(int i=0;i<s.size();i++){
            if(s[i]=='I')arr[i]=a++;
            else arr[i]=b--;
        }
        arr[s.size()]=a;
        return arr;
    }
};