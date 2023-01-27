class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int leftsum = 0, wholesum = 0;

        for(int i : nums)
            wholesum += i;

        for(int i = 0; i < nums.size(); i++)
        {       
            wholesum -= nums[i];
            
            if(leftsum == wholesum) return i;
            
            leftsum += nums[i];
        }

        return -1;
    }
};