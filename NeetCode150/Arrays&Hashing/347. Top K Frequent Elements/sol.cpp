#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // count the frequency
        unordered_map<int, int> count;

        // We add one to the size of the vector because array indices start at zero.
        // This ensures that the vector has enough space to accommodate all possible indices. 
        // For example, if nums.size() is 5, we need a vector of size 6 to access indices 0 through 5.                                            
        vector<vector<int>> freq(nums.size() + 1);

        // count the frequency of elements with a map
        for (int n : nums) {
            count[n]++;
        }

        // claim the frequency as key, elements as value
        for (const auto& entry : count) {
            freq[entry.second].push_back(entry.first);
        }

        // iterate through from the end of vector
        vector<int> res;
        for (int i = freq.size() - 1; i > 0; --i) {
            for (int n : freq[i]) {
                res.push_back(n);
                if (res.size() == k) {
                    return res;
                }
            }
        }

        return res;
    }
};