class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int c=count(arr.begin(),arr.end(),0);
        int j=0;
        if(c>0){
            for(int i=0;i<arr.size() and j<c;i++){
                if(arr[i]==0){
                    arr.insert(arr.begin()+i+1,0);
                    i++;
                    j++;
                }
            }
            while(c--){
                arr.pop_back();
            }
        }
    }
};