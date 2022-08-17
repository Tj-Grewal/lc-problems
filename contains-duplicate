// First method using N^2 brute force approach

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    
        // This is the brute force approach using N^2 model
        // Iterate through and compare first element against the rest
        
        for (int j = 0; j < nums.size(); j++) {
            for (int i = 1; i < nums.size(); i++) {
                if (nums[j] == nums[i]) {
                    return true;
                }
            }
        }
        return false;
    }
};
