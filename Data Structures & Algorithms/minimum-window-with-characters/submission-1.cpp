class Solution {
public:
    string minWindow(string s, string t) {
        if (t.length() > s.length()) {
        return "";
    }

    unordered_map<char, int> need;
    unordered_map<char, int> window;

    for (char ch : t) {
        need[ch]++;
    }

    int required = need.size();
    int formed = 0;
    int left = 0;

    int minLength = INT_MAX;
    int startIndex = 0;

    for (int right = 0; right < s.length(); right++) {
        char ch = s[right];
        window[ch]++;

        if (need.count(ch) && window[ch] == need[ch]) {
            formed++;
        }

        while (formed == required) {
            int currentLength = right - left + 1;

            if (currentLength < minLength) {
                minLength = currentLength;
                startIndex = left;
            }

            char leftChar = s[left];

            if (need.count(leftChar) &&
                window[leftChar] == need[leftChar]) {
                formed--;
            }

            window[leftChar]--;
            left++;
        }
        
    }
    if (minLength == INT_MAX) {
    return "";
}

    return s.substr(startIndex, minLength);
    }
};
