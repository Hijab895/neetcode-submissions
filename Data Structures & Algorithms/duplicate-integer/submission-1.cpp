class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>duplicates;
        for(int i=0;i<nums.size();i++){
            if(duplicates.contains(nums[i])){
                return true;
            }
            else{
                duplicates.insert(nums[i]);
            }
           
        }
        return false;
    }
};