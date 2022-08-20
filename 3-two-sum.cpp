class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Add values to a hash map from the array and check if the
        // difference between the target and the array index exists
        
        // When found, return the two indices since its guaranteed to exist 
        unordered_map<int, int> s;
        vector<int> res;
        
        for (int i = 0; i < nums.size(); i++) {
            int difference = target - nums[i];
            if (s.find(difference) != s.end()) {
                res.push_back(s[difference]);
                res.push_back(i);
                break;
            }
            else {
                s.insert({nums[i], i});
            }
        }
        return res;
    }
};

