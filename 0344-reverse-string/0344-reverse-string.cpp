class Solution {
public:
    void reverseString(vector<char>& nums) {
        int n=nums.size();
        int start = 0;
        int end = n-1;
        int mid = start+end/2;
        while(start<=end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
        
    }
};