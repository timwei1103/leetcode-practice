class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> sum(n, 0);
        /*
        for(int i = 0; i<nums.size();i++){
            int lows = 0,highs = 0;
            for(int j = 0; j<i;j++)lows += nums[j];
            for(int k = nums.size()-1; k>i;k--)highs += nums[k];
            //cout<<"lows"<<lows<<"highs"<<highs;
            sum[i] = highs-(nums.size()-1-i)*nums[i]+i*nums[i]-lows;
        }*/
        for(int i = 1,low = 0; i < n ; i++){
            sum[i] += (low +=(nums[i]-nums[i-1])*i);
            cout<<"low"<<sum[i];
        }
        for(int i= n-2,high = 0; i>=0 ;i--){
            sum[i] += (high += (nums[i+1]-nums[i])*(n-i-1)); 
            cout<<"high"<<sum[i];
        }
        return sum;
    }
};
