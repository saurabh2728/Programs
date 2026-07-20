// class Solution {
// public:
    

//     int findKthLargest(vector<int>& nums, int k) {
//         priority_queue<int,vector<int>,greater<int>>p;

//         for(int i=0;i<k;i++){
//             p.push(nums[i]);
//         }]
//         for(int i=k;i<nums.size();i++){
//             if(nums[i] > p.top()){
//                 p.pop();
//                 p.push(nums[i]);
//             }
//         }
//         return p.top();

//     }
// };


class Solution{
    public:
    int findKthLargest(vector<int>& nums, int k){
        priority_queue<int,vector<int>,greater<int>> h;
        for (int i = 0; i < nums.size(); i++){
            h.push(nums[i]);
            if(h.size()>k)
            h.pop();
        }
        return h.top();
    }
};