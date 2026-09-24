class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> mp;
       for(string s : strs)
       {
            string key = s;
            sort(key.begin(), key.end());
            mp[key].push_back(s);
       }
       vector<vector<string>> result;

       for(auto& entry:mp)   // map: entry.first is the key, 
                             //while entry.second is the value( vector of strings).
       {
            result.push_back(entry.second);
       }
        return result;
    }
};

//Complexity
/*Suppose:
- N = number of strings
- K = maximum length of a string
We sort every string:
Time  : O(N × K log K)
Space : O(N × K)
*/
