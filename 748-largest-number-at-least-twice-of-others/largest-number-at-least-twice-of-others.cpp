class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = *max_element(nums.begin(),nums.end());

        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!= maxi && 2*nums[i]>maxi){
                return -1;
            }
        }
        int index = max_element(nums.begin(), nums.end()) - nums.begin();
        return index;
    }
};