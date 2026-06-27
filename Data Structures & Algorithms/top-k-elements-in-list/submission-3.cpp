class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>hp;
        for(int num: nums){
            hp[num]++;
        }
        //create bucket
        vector<vector<int>>freq (nums.size()+1);
        for(auto& f: hp){
            freq[f.second].push_back(f.first);
        }
        vector<int>result;
        for(int i = freq.size()-1;i>=0;i--){
            for(int n: freq[i]){
                result.push_back(n);
                if(result.size()==k){
                    return result;
                }
            }
        }
        return result;
    }
};
