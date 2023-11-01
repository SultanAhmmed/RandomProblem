class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int pos = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
       if(pos < nums.size() and nums[pos] == target){
           return pos;
       }
       else{
           int maybe = upper_bound(nums.begin(),nums.end(),target) - nums.begin();     
            return maybe;
       }
    return -1;
    }
};
