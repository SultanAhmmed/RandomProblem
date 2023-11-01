int search(vector<int> &nums, int target) {
    int n = nums.size();
    int pos = -1;
    pos = lower_bound(nums.begin(),nums.end(), target) - nums.begin();
    
    if( nums[pos] == target ) return pos;
    else return -1;
}
