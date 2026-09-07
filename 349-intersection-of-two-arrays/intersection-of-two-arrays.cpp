class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> set1;
        set<int> set2;

        for(int x:nums1){
            set1.insert(x);
        }
        for(int x:nums2){
            set2.insert(x);
        }

        vector<int>res;
        int k=0;
        for(int x:set1){
            if(set2.contains(x)){
                res.push_back(x);
                k++;
            }
        }
        return res;
    }
};