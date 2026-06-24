class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        unordered_map<char,int>freq;
        if(n!=m){
            return false;
        }
        for(int i=0;i<n;i++){
            freq[s[i]]++;
            freq[t[i]]--;
        }
        for(auto & ch:freq){
            if(ch.second!=0){
                return false;
            }
        }
        return true;
    }
};
