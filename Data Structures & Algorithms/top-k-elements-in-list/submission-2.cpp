class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        priority_queue<pair<int, int>>pq;
        vector<int> result;

        for (int i =0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        for (auto& i : mp){
            pq.push({i.second, i.first});
        }
        int n = k;
        while(n > 0){
            result.push_back(pq.top().second);
            pq.pop();
            n--;
        }

        return result;
    }
};
