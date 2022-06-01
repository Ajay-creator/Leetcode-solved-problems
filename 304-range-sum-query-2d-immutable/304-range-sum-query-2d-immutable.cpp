class NumMatrix{
private:
    int sum[201][201];
public:
    NumMatrix(vector<vector<int>>& matrix){
        int m=matrix.size(),n=matrix[0].size();
        memset(sum,0,sizeof sum);
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + matrix[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int res = sum[row2+1][col2+1] - sum[row2+1][col1] - sum[row1][col2+1] + sum[row1][col1];
        return res;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */