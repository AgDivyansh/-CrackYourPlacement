class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ind = 0 ;
        for (int i = 0 ; i < nums.size() ; i++)
        {
            if (nums[i] == 0)
            {
                swap (nums[ind++] , nums[i]) ;
            }
        }
        for (int i = ind ; i < nums.size() ; i++)
        {
            if (nums[i] == 1)
            {
                swap (nums[ind++] , nums[i]) ;
            }
        }
    }
};