class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int x:nums){
            freq[x]++;
        }

       int maxfreq=0;
       int ans=0;
       for(auto x : freq){
            if(x.second > maxfreq){
                maxfreq = x.second;
                ans = x.first;
            }
       }
       return ans;
    }
};