class Solution {
public:
    int totalMoney(int n) {
        int i=1,sum=0,k=2,j=7;
        while(n--){
            sum+=i;
            if(i==j){
                i=k;
                k++;
                j++;
                continue;
            }
            i++;
        }
        return sum;
    }
};