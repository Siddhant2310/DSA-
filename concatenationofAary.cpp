

// class Solution {
// public:
//     vector<int> getConcatenation(vector<int>& nums) {
//         vector<int> ans = nums;
        
//         for(int x : nums) {
//             ans.push_back(x);
//         }

//         return ans;
//     }
// };


class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        for(int i = 0; i < n; i++) {
            ans.push_back(nums[i]);
        }

        for(int i = 0; i < n; i++) {
            ans.push_back(nums[i]);
        }

        return ans;
    }
};