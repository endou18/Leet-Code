class Solution {
public:
    string freqAlphabets(string s) {
        vector<char> arr(28);
        char a='a';
        for(int i=1;i<27;i++){
            if(i<10){
                arr[i]=a++;
            }
            else{
                arr[i]=a++;
            }
        }
        string ans;
        for(int i=0;i<s.size();i++){
            string tmp;
            if(i+2<s.size() && s[i+2]=='#'){
                tmp=s[i];
                tmp+=s[i+1];
                int ind=stoi(tmp);
                ans+=arr[ind];
                i+=2;
            }
            else{
                tmp+=s[i];
                ans+=arr[s[i]-'0'];
            }
        }return ans;
    }
};