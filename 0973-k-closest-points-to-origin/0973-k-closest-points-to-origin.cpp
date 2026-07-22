// class Solution {
// public:
//     vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
//         sort(points.begin(), points.end(),
//             [](vector<int>& a, vector<int>& b) {
//                 int d1 = a[0]*a[0] + a[1]*a[1];
//                 int d2 = b[0]*b[0] + b[1]*b[1];
//                 return d1 < d2;
//             });

//         return vector<vector<int>>(points.begin(), points.begin() + k);
//     }
// };



class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int, int>> pq;

        for (int i = 0; i < points.size(); i++) {
            int x = points[i][0];
            int y = points[i][1];
            int dist = x * x + y * y;

            pq.push({dist, i});

            if (pq.size() > k)
                pq.pop();
        }

        while (!pq.empty()) {
            auto t = pq.top();
            pq.pop();

            int p = t.second;
            ans.push_back({points[p][0], points[p][1]});
        }

        return ans;
    }
};