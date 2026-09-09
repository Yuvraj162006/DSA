class Solution {
public:
    bool isEvenDigits(int num){
        int digitCount=0;
        while(num!=0){
            num = num/10;
            digitCount++;
        }
        return digitCount%2==0;
        
    }

    int findNumbers(vector<int>& nums) {
        int evendigits=0;
        for(int i=0;i<nums.size();i++){
            if(isEvenDigits(nums[i])){
                evendigits++;
            }
        }
        return evendigits;
    }
};