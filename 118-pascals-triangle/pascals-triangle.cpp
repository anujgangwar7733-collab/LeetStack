class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> dp(numRows);
        
        for (int i = 0; i < numRows; i++) {
            // Resize row i to have (i + 1) elements, initialized to 1
            // This automatically handles the base cases dp[i][0] = 1 and dp[i][i] = 1
            dp[i].resize(i + 1, 1);
            
            // Fill only the inner elements (from index 1 to i - 1)
            for (int j = 1; j < i; j++) {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            }
        }
        
        return dp;
    }
};