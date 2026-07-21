class Solution {
public:
    string minWindow(string s, string t) {
        if(t.length()>s.length()){
            return "";
        }
        unordered_map<char,int>need;
        for(int i=0;i<t.length();i++){
            need[t[i]]++;
        }
        unordered_map<char,int>window;
        int formed=0;
        int required=need.size();
        int left=0;
        int minlength=INT_MAX;
        int startindex=0;
        for(int right=0;right<s.length();right++){
            char ch=s[right];
            window[ch]++;
            if(need.count(ch)&& window[ch]==need[ch]){
                formed++;
            }
            while(required==formed){
                int currlength=right-left+1;
                if(currlength<minlength){
                    minlength=currlength;
                    startindex=left;
                }
                
                char leftch=s[left];
                if(need.count(leftch)&& window[leftch]==need[leftch]){
                    formed--;
                }
                window[leftch]--;
                left++;
            }
        }
        if(minlength==INT_MAX){
            return "";
        }
        return s.substr(startindex,minlength);
    }
};
