#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       
        int l=nums.size();
         vector<int>ans;
        n=l/2;
      
        for(int i =0;i<n;i++){
           ans.push_back(nums[i]);
           ans.push_back(nums[n+i]);
        }
        return ans;

    }
};