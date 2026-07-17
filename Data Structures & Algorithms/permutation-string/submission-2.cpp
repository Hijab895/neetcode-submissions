class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;
        }
        vector<int>s1freq(26,0);
        vector<int>s2freq(26,0);
        for(int i=0;i<s1.length();i++){
            s1freq[s1[i]-'a']++;
            s2freq[s2[i]-'a']++;
        }
        int left=0;
        for(int right=s1.length();right<s2.length();right++){
            if(s1freq==s2freq){
                return true;
            }
            s2freq[s2[right]-'a']++;
            s2freq[s2[left]-'a']--;
            left++;
        }
        return s1freq==s2freq;

    }
};
