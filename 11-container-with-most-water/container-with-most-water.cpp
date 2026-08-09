class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int area=0;
        int max_area=INT_MIN;
        while(l<r){
            int width=r-l;
            area=width*min(height[l],height[r]);
            max_area=max(max_area,area);
            if(height[l]<height[r]){
                l++;
            }  
            else{
                r--;
            }
        }
        return max_area;
    }
};