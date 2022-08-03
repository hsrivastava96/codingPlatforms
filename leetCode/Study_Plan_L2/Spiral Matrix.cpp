class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int m = matrix.size(), n = matrix[0].size(), i = 0, j = 0, count = 0;
        vector<int> ans;
        vector<vector<int>> dp(m, vector<int>(n, -1));
        
        int nSize = m*n;
        int hS = 0, hE = n-1, vS = 1, vE = m-1;
        
        while(nSize)
        {
            // Right
            while(nSize && j <= hE)
            {
                ans.push_back(matrix[i][j]);
                j++;
                nSize--;
            }
            j--;
            i++;
            hE--;
            
            // Down
            while(nSize && i <= vE)
            {
                ans.push_back(matrix[i][j]);
                i++;
                nSize--;
            }
            i--;
            j--;
            vE--;
            
            // Left
            while(nSize && j >= hS)
            {
                ans.push_back(matrix[i][j]);
                j--;
                nSize--;
            }
            j++;
            i--;
            hS++;
            
            // Up
            while(nSize && i >= vS)
            {
                ans.push_back(matrix[i][j]);
                i--;
                nSize--;
            }
            i++;
            j++;
            vS++;
        }
        return ans;
    }
};