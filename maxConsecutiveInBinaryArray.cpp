#include <iostream>
#include <vector>
using namespace std;

// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int n=nums.size();
//         int count = 0;
//         int max=0;
//         for(int i = 0; i<n; i++){
//             if(nums[i]==1){
//                 count++;
//                  if(max<count){
//                      max=count;
                     
//                 } 
//             }
//             else{
                
//                       count=0;
//                 } 
                
                
                  
            
//         }
//         return max;
        
//     }
// };

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count = 0;
        int maxCount=0;
        for(int i = 0; i<n; i++){

            if(nums[i]==1){
                count++;
                maxCount=max(count,maxCount);
            } else {
                count=0;
                } 
        }
        return maxCount;
        
    }
};