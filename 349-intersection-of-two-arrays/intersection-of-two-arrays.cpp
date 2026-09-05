class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1;
        set<int> set2;

        // add array1 elements in set1 for unique elements
        for(int num:nums1){
            set1.insert(num);
        }

        // add array2 elements in set2 for unique elements
        for(int num:nums2){
            set2.insert(num);
        }

        //Intersection
        vector<int> result(nums1.size());
        int k=0;

        for(int num:set1){
            if(set2.contains(num)){
                result[k] = num;
                k++;
            }
        }
        vector<int>copy(result.begin(),result.begin()+k);
        return copy;

        
    }
};