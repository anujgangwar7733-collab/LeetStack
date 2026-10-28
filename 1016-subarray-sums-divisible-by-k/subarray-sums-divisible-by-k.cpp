class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
unordered_map<int, int> f;
        f[0] = 1; // Base case: remainder 0 pehle se 1 baar exist karta hai
        
        int sum = 0;
        int res = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            
            int rem = sum % k;
            
            // Negative remainder ko positive banayein
            if (rem < 0) {
                rem += k;
            }
            
            // C++20 syntax: check if remainder exists in map
            if (f.contains(rem)) {
                res += f[rem];
            }
            
            // Frequency update karein
            f[rem]++;
        }
        
        return res;
    }
};