class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0,n=nums.size(),j=0;
        long long a=-1,b=-1;
        for(int i=0;i<n;i++){
            if(nums[i]<minK || nums[i]>maxK){
                a=-1;
                b=-1;
                j=i+1;
            }
            if(nums[i]==minK)a=i;
            if(nums[i]==maxK)b=i;
            ans +=max(0LL, min(a,b)-j+1);
        }
        return ans;
    }
};