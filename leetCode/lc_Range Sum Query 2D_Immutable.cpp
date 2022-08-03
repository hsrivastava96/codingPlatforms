class NumMatrix {
public:
    vector<vector<int>> dp, dp2;
    
    NumMatrix(vector<vector<int>>& matrix) 
    {
        int r = matrix.size(), c = matrix[0].size();
        for(int i = 0; i < r; i++)
        {
            vector<int> temp;
            for(int j = 0; j < c; j++)
                temp.push_back(0);
            dp.push_back(temp);
            dp2.push_back(temp);
        }

        
        for(int i = 0; i < r; i++)
        {
            dp[i][0] = matrix[i][0];
            dp2[i][0] = matrix[i][0];
            for(int j = 1; j < c; j++)
            {
                dp[i][j] = dp[i][j-1] + matrix[i][j];
                dp2[i][j] = matrix[i][j];
            }
        }
        // for(int i = 0; i < r; i++)
        // {
        //     vector<int> temp;
        //     for(int j = 0; j < c; j++)
        //         cout<<dp[i][j]<<"\t";
        //     cout<<endl;
        // }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) 
    {
        int sum = 0;
               
        for(int i = row1; i <= row2; i++)
            sum+= dp[i][col2] - dp[i][col1] + dp2[i][col1];
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */