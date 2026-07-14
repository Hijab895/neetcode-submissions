class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>hs;
        int left=0;
        int result=0;
        for(int right=0;right<s.length();right++){
            while(hs.find(s[right])!=hs.end()){
                hs.erase(s[left]);
                left++;
            }
                hs.insert(s[right]);
            int length=right-left+1;
            result=max(length,result);
        }
        return result;

    }
};
