class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int>s;
        for(int num:arr){
            if(s.contains(2*num) || s.contains(num/2) && (num%2==0)){
                return true;
            }
            s.insert(num);
        }
        return false;
    }
};