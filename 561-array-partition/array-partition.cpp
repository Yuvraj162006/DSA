class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mini = 0;
        int ans=0;
        for(int i=0;i<nums.size();i+=2){
            mini = min(nums[i],nums[i+1]);
            ans+=mini ;
        }
        return ans;
    }
};