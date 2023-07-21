class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0,s=0;
        for(auto &i: gain){
            s+=i;
            ans=max(ans,s);
        }
        return ans;
    }
};