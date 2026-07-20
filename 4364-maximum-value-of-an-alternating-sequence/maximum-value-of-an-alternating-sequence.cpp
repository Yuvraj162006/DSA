class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1){
            return s;
        }

        if(n%2==0){
            long long odd = n/2;
            long long even = n/2-1;
            return odd*m-even+s;
        }else{
            long long odd = n/2;
            long long even = n/2;
            return odd*m-even+s+1;
        }
    }
};