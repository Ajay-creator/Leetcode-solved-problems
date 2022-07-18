class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>nums;
        int fact = 1;
        for(int i=1;i<n;i++){
            nums.push_back(i);
            fact = fact*i;
        }
        nums.push_back(n);
        k=k-1;
        string res;
        while(true){
            int pos = k/fact;
            res.push_back(nums[pos]+'0');
            nums.erase(nums.begin()+pos);
            if(nums.size()==0){
                break;
            }
            k = k%fact;
            fact = fact/nums.size();
            
        }
        return res;
    }
};