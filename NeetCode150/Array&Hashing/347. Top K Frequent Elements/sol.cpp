class Solution {
public:
    static bool compare(const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequent;
        for (auto& num : nums) {
            frequent[num]++;
        }

        vector<pair<int, int>> sorted;
        for (auto& pair : frequent) {
            sorted.push_back(pair);
        }
        sort(sorted.begin(), sorted.end(), compare);

        vector<int> ans;
        for (auto& pair : sorted) {
            if (k > 0) {
                ans.push_back(pair.first);
            }
            k--;
        }
        return ans;
    }
};