class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      unordered_map<int,int>mp;
      int tmp;
      for(int i=0;i<numbers.size();i++){
         tmp=target-numbers[i];
         if(mp.count(tmp)){
            return {mp[tmp],i+1};
         }
         else{
            mp[numbers[i]]=i+1;
         }
      } 
      return {}; 
    }
};
