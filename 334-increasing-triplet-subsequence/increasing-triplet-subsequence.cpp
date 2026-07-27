class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int INF = INT_MAX;
        int first = INF;
        int second = INF;

        for(int i=0;i<nums.size();i++){
            if(nums[i] <= first){
                first = nums[i];
            }else if(nums[i]<= second){
                second = nums[i];
            }else{
                return true;
            }
        }
        return false;
    }
};