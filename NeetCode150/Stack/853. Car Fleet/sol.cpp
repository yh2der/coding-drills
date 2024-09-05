#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        stack<float> fleets;
        vector<pair<int, float>> pos_time; // { {position_i, timeLeft_i}, {...}, ... }
         
        for(int i=0; i<position.size(); i++)
            pos_time.push_back({ position[i], float(target - position[i]) / speed[i] });
        
        //根據pair.first由小到大，first相同則比較second
        sort(pos_time.begin(), pos_time.end());         
        
        for(int i=0; i<position.size(); i++){
            float fleet_i = pos_time[i].second;
            cout << pos_time[i].first;
            while(fleets.size() && (fleet_i >= fleets.top()))
                fleets.pop();
            
            fleets.push(fleet_i);
        }
        
        return fleets.size();
    }
};

int main() {
    Solution sol;
    vector<int> pos = {4,1,0,7};
    vector<int> speed = {2,2,1,1};
    sol.carFleet(10, pos, speed);
    return 0;
}