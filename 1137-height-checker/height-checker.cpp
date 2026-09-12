class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>exp;
        int n = heights.size();
        for(int i=0;i<n;i++){
            exp.push_back(heights[i]);
        }
        sort(exp.begin(),exp.end());

        int count=0;
        for(int i=0;i<n;i++){
            if(exp[i]==heights[i]){
                continue;
            }else{
                count++;
            }
        }
        return count;
    }
};