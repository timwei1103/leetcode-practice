class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        /*for (int i = 0; i < nums.size(); ++i) {
            int sum = nums[i];
            for (int j = i + 1; j < nums.size(); ++j) {
                sum += nums[j];
                if (sum == k) return true;
                if (k != 0 && sum % k == 0) return true;
            }
        }
        return false;*/ //time limit
        
        map<int,int> m{{0,-1}};
        int sum = 0;
        for(int i = 0; i<nums.size() ; i++){
            sum += nums[i];
            int t = (k == 0) ? sum : (sum % k);
            if (m.count(t)) {
                if (i - m[t] > 1) return true;
            } 
            else m[t] = i;
        }
        return false;
    }
};
