class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;

        for (int i =0; i < strs.size(); i++){
            string sorted = strs[i];
            sort(sorted.begin(), sorted.end());
            mp[sorted].push_back(strs[i]);
        }

        vector<vector<string>> result;

        for (auto& pair: mp){
            result.push_back(pair.second);
        } 

        return result;
    }    
};
