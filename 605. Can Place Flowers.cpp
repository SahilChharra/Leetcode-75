class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int n) {
        if(n==0)return true;
        if(v.size()==1){
            if((v[0]==0&&n==1)||n==0){
                return true;
            }
            return false;
        }if(v.size()==2){
            if(n==0||(n==1&&(v[0]==0&&v[1]==0))){
                return true;
            }return false;
        }
        if(v[0]==0&&v[1]==0){
            v[0]=1;
            n--;
        }if(n==0)return true;
        for(int i = 1; i < v.size()-1; i++){
            if(v[i-1]==1)continue;
            if(v[i]==0&&v[i+1]==0){
                v[i] = 1;
                n--;
            }
            if(n==0){
                return true;
            }
        }
        if(n==0){
            return true;
        }
        if(n==1){
            if(v[v.size()-2]==0&&v[v.size()-1]==0){
                return true;
            }
            return false;
        }
        return false;
    }
};