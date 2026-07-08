class Solution {
public:
    int maxArea(vector<int>& heights) {
        int result=0;
        int left=0;
        int right=heights.size()-1;
        for(int i=0;i<heights.size();i++){
            result=max(min(heights[left],heights[right])*(right-left),result);
            if(heights[left]<heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return result;
    }
};
