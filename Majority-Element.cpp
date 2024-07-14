class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = nums[0] ;
        int ct = 1 ;
        for (int i = 1 ; i < nums.size() ; i++)
        {
            if (nums[i] == ans)
            {
                ct++ ;
            }
            else
            {
                if (ct > 1)
                {
                    ct-- ;
                }
                else
                {
                    ans = nums[i] ;
                    ct = 1 ;
                }
            }
        }
        return ans ;
    }
};