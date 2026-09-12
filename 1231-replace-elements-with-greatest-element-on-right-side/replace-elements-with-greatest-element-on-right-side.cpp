class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        for(int i=1;i<n;i++){
            int max = *max_element(arr.begin()+i,arr.end());
            arr[i-1]=max;
        }
        arr[n-1]=-1;
        return arr;
    }
};