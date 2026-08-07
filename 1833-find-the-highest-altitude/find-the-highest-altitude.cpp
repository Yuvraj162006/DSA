class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int start=0;
        int n = gain.size();
        vector<int>altitude(n+1);
        altitude[0] = 0;
        for(int i=0;i<n;i++){
            altitude[i+1] = start+gain[i];
            start = altitude[i+1];
        }

        int maxAltitude = *max_element(altitude.begin(),altitude.end());
        return maxAltitude;
    }
};