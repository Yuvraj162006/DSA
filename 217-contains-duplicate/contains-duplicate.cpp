class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // TC : O(n)
        unordered_map<int,int>freq;
        for(int x: nums){
            freq[x]++;
        }
        for(auto x : freq){
            if(x.second != 1){
                return true;
            }
        }
        return false;
    }
};