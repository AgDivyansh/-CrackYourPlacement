class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans = 0 ;
        for (int i = 0 ; i < nums.size() ; i++)
        {
            int ind = abs (nums[i])-1 ;
            if (nums[ind] < 0)
            {
                return ind+1 ;
            }
            nums[ind] = 0 - nums[ind] ;
        }
        return ans ;
    }
};