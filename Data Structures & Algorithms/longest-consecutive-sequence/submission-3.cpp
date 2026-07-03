class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.empty()){
            return 0;
        }
        int result=1;
        int curr=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            if(nums[i]==nums[i-1]+1){
                curr++;
            }
            else{
                curr=1;
            }
            result=max(result,curr);
        }
        return result;
    }
};
