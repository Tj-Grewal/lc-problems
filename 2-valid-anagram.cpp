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

// Approach 2: Do a hashmap and put string s into it.  If you find all 
// the letters w/ same count in t in s, return true otherwise false
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        // First check is s is the same length as t
        if (s.length() != t.length()) { return false; }
        
        // hashmap of char for s[index] and int for value of counts of those chars indexed 
        unordered_map<char,int> hm;
        
        for (int i = 0; i < s.length(); i++) {
            
            // when you do Hash[key] = value, We make a tuple 
            //that is basically (Key, value) == (first, second)
            // originally val is 1, 
            hm[s[i]]++; // this is the same as (Key, value+1)
            hm[t[i]]--; // just like we increment for s, decrement for t
            // end goal is to make the hm = 0, which is the count differentiation
        }
        for (auto count: hm) {
            if (count.second) {return false;} // if the value is anything besides 0
        }
        return true;
    }
};

