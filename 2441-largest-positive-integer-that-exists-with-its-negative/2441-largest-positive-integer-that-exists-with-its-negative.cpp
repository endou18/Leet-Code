class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<int>:: iterator it;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                it= find(nums.begin(),nums.end(),abs(nums[i]));
                int ind=it-nums.begin();
                if(ind>=0 && ind<nums.size())return abs(nums[i]);
            }
            else{
                break;
            }
        }
        return -1;
    }
};