class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        while(l<=r){
            int mid_element = l + (r-l) / 2;

            if(nums[mid_element]==target){
                return mid_element;
            }
            else if(nums[mid_element]<target){
                l = mid_element+1;
            }
            else{
                r = mid_element-1;
            }
        }
        return l;

    }
};