class Solution {
public:
    bool isAnagram(string s, string t) {
        
        // First check is s is the same length as t
        if (s.length() != t.length()) { return false; }
        
        // Approach 1, sort the strings, they will be anagrams if they equal each other
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
 
    }
};

