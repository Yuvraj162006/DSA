class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int x: arr){
            freq[x]++;
        }
        unordered_set<int>set;
        for(auto i : freq){
            if(set.find(i.second) != set.end()){
                return false;
            }
            set.insert(i.second);
        }
        return true;
        
    }
};