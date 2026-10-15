class Solution {
public:

    string encode(vector<string>& strs) {
        string result;

        for (int i = 0; i < strs.size(); i++){
            int n = strs[i].size();
            result += to_string(n) + "#" + strs[i];
        }

        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while (i < s.size()){
            char temp = s[i];
            string number;
            while (s[i] != '#') {
                number += s[i];
                i++;
            }
            int n = stoi(number);

            string word;
            if (s[i] == '#') i++;

            while (n > 0){
                word += s[i];
                i++;
                n--;
            }

            result.push_back(word);
        }

        return result;
    }
};
