class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> m;
        for(int i = 0 ; i< nums.size() ; i++){
            if(m.find(nums[i]) != m.end() && (i-m[nums[i]]<=k)){
                return true;
            }
            m[nums[i]] = i;
        }
        return false;
    }
};

//hash_set方式
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> s;
        for(int i = 0 ; i<nums.size() ; i++){
            if(s.count(nums[i]))return true;
            s.insert(nums[i]);
            //只往前找k個 超過就刪掉
            if(s.size()>k)s.erase(nums[i-k]);
        }
        return false;
    }
};
