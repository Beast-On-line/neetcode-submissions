class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int, int> mp;
        vector <int> result;
        for (int i =0; i < nums.size(); i++){
            int required = target - nums[i];
            if (mp.count(required)){
                return {mp[required], i};
            }
            mp[nums[i]] = i;
        }

        return {};
    }
};
