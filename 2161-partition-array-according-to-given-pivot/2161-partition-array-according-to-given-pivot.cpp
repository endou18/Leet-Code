class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> arr;
        for(auto &c:nums){
            if(c<pivot)arr.push_back(c);
        }
        for(auto &c:nums){
            if(c==pivot)arr.push_back(c);
        }
        for(auto &c:nums){
            if(c>pivot)arr.push_back(c);
        }
        return arr;
    }
};