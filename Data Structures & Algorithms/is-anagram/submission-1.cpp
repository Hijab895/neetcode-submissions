class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>count1;
        unordered_map<char,int>count2;
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            count1[s[i]]++;
            count2[t[i]]++;
        }
        return count1==count2;
    }
};
