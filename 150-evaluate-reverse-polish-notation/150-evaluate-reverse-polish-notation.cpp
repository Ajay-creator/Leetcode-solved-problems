class Solution {
public:
    int evalRPN(vector<string>& A) {
        int n = A.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(A[i]=="+" || A[i]=="-" || A[i]=="*" || A[i]=="/"){
                int num2 = st.top();
                st.pop();
                int num1 = st.top();
                st.pop();
                if(A[i]=="+") st.push(num1+num2);
                else if(A[i]=="-") st.push(num1-num2);
                else if(A[i]=="*") st.push(num1*num2);
                else st.push(num1/num2);
            }
            else st.push(stoi(A[i]));
        }
        return st.top();
    }
};