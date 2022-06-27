class Solution {
public:
    int minPartitions(string n) {
        int res=0;
        for(auto& i:n){
            res = max(res,i-'0');
            if(res==9) break;
        }
        return res;
    }
};