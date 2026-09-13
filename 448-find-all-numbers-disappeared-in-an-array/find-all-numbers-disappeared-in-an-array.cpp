class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> s;

        for(int i : nums) {
            s.insert(i);
        }

        vector<int> ans;

        for(int i = 1; i <= nums.size(); i++) {
            if(s.contains(i)) {
                continue;
            }
            else {
                ans.push_back(i);
            }
        }

        return ans;
    }
};