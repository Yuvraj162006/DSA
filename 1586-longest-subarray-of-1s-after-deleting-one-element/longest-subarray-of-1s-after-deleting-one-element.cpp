class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int left =0;
        int zerocount =0;
        int maxLength=0;

        for(int right=0;right<n;right++){
            if(nums[right]==0){
                zerocount++;
            }
            while(zerocount > 1 ){
                if(nums[left]==0){
                    zerocount--;
                }
                left++;
            }
            maxLength = max(maxLength ,right-left);
        }
        return maxLength;
    }
};