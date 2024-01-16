class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>dp(nums.size(), 1);
        int n = nums.size();
        for(int i = 0 ; i< n ; i++){
            for(int j = 0 ; j<i ; j++){
                if(nums[i]>nums[j])dp[i] = max(dp[i] , dp[j]+1);
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};
