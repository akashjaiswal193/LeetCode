class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxArea = 0;
        while(left < right){
            int width = right - left;
            int currentHeight = min(height[left], height[right]);
            int area = width * currentHeight;

            if(area > maxArea)
                maxArea = area;

            if(height[left] < height[right])
                left = left+1;
            else 
                right = right-1;
        }
        return maxArea;
    }
};