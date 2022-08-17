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

// Second approach - speed up to NlogN time complexity 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    
        // NlogN approach. Sort the items, making it so that if there are
        // duplicates, they will be right next to each other
        sort(nums.begin(), nums.end());
        
        // Sorting takes NlogN and the array comparison is N giving us 
        // Time complexity O(NlogN), no additional space required
        
        for (int i = 0; i < nums.size()-1; i++) {
            if (nums[i] == nums[i+1]) {
                return true;
            }
        }
        return false;
    }
};
