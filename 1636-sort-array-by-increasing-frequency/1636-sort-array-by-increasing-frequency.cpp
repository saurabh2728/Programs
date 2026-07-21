class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int,int> mp;

        // store frequency
        for(int x : nums) {
            mp[x]++;
        }

        // pair = {frequency, value}
        priority_queue<pair<int,int>> pq;

        for(auto x : mp) {
            pq.push({-x.second, x.first});
        }

        vector<int> ans;

        while(!pq.empty()) {

            int freq = -pq.top().first;
            int val = pq.top().second;

            pq.pop();

            while(freq--) {
                ans.push_back(val);
            }
        }

        return ans;
    }
};