class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int min_len = INT_MAX;
        int low = 0;
        int sum = 0;

        for (int high = 0; high < n; high++) {
            sum += nums[high];
 
            while (sum >= target) {
                min_len = min(min_len, high - low + 1);
                sum -= nums[low];
                low++;
            }
        }
      
        if (min_len == INT_MAX) {
            return 0;        
        } else {
            return min_len;  
}
    }
};