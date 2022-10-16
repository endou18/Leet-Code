class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        for(int i=num;i>=0;i--){
            string t1=to_string(i);
            string t2=t1;
            reverse(t1.begin(),t1.end());
            int a=stoi(t1);
            int b=stoi(t2);
            if((a+b)==num)return true;
        }
        return false;
    }
};