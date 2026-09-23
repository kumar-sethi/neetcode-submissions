class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> numSet;
        for(int i=0; i<nums.size(); ++i)
        {
            if(numSet.count(nums[i]))
                return true;
            numSet.insert(nums[i]);
        }
        return false;
    }
};