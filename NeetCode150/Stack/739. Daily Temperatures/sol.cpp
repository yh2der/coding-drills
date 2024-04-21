//暴力解 Time LimiteExceeded
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> answer;
        for (int i=0; i<temperatures.size(); i++) {
            int temp = 0;
            bool notFound = 1;
            for (int j=i+1; j<temperatures.size(); j++) {
                temp++;
                if (temperatures[j] > temperatures[i]) {
                    answer.push_back(temp);
                    notFound = 0;
                    break;
                }
            }
            if (notFound == 1) {
                answer.push_back(0);
            }
        }
        return answer;
    }
};

//stack
#include <vector>
#include <stack>

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> answer(temperatures.size(), 0);
        stack<int> st;
        
        for (int i = 0; i < temperatures.size(); i++) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int prev_index = st.top();
                st.pop();
                answer[prev_index] = i - prev_index;
            }
            st.push(i);
        }
        
        return answer;
    }
};