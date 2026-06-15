class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int maxWater = 0;
        while (left<right){

            // key Formula to compute the width area of max water
            maxWater = max(maxWater, (right-left)* min(height[left], height[right]));
            // If the left pointer == right pointer then move the right inwards
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }


        }
        return maxWater;

    }
};