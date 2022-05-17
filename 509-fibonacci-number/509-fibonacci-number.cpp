class Solution {
private:
    int t[31];
public:
    int solve(int n){
        if(n<2) return n;
        if(t[n]!=-1) return t[n];
        return t[n] = fib(n-1)+fib(n-2);
    }
    int fib(int n) {
        memset(t,-1,sizeof(t));
        return solve(n);
    }
};