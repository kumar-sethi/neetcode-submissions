class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res=0;
        unordered_map<char, int> mp;
        int l=0;
        for(int r=0; r<s.size(); r++)
        {
            if(mp.find(s[r]) != mp.end(s[r]))
            {
                l = max(mp[s[r]] + 1, l); //max of last stored posn of l 
            }
            mp[s[r]] = r; //update posn of right side of window
            res = max(res, r-l+1); //Update the longest length
        }
        return res;
    }
};
/*
Time complexity: 
O(n)
Space complexity: 
O(m)
Where 
n is the length of the string and 
m is the total number of unique characters in the string.
*/