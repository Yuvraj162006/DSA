class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int write = 0;

        // Place all non-zero elements first
        for(int read = 0; read < n; read++) {
            if(nums[read] != 0) {
                nums[write] = nums[read];
                write++;
            }
        }

        // Fill remaining positions with zero
        while(write < n) {
            nums[write] = 0;
            write++;
        }
    }
};