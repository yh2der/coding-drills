class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // if strs are null, return {}
        if (strs.empty())
            return {};

        unordered_map<string, vector<string>> groups;

        // sort every str in strs and treat them as keys
        for (const string& str : strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            groups[sortedStr].push_back(str);
        }

        // Convert the grouped result into a two-dimensional vector
        vector<vector<string>> result;
        for (auto& pair : groups) {
            result.push_back(pair.second);
        }

        return result;
    }
};
