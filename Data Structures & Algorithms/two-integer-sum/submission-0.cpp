class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> myMap;
        vector<int> result;
        for(int i=0; i<nums.size(); i++)
        {
            int diff = target-nums[i];
            if(myMap.find(diff) != myMap.end())
            {
                result.push_back(myMap[diff]);
                result.push_back(i);
            }
            myMap.insert({nums[i], i});
        }
        return result;
    }
};
