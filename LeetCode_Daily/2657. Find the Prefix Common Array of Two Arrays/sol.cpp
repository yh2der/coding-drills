class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans(A.size(), 0);
        unordered_map<int, int> count;
        int common = 0;
        
        for (int i = 0; i < A.size(); i++) {
            count[A[i]]++;
            if (count[A[i]] == 2) common++;
            
            count[B[i]]++;
            if (count[B[i]] == 2) common++;
            
            ans[i] = common;
        }
        
        return ans;
    }
};