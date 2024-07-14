class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m ;
        m[nums[0]] = 0; 
        for (int i = 1 ; i < nums.size() ; i++)
        {
            int diff = target - nums[i] ;
            if (m.find(diff) != m.end())
            {
                // cout << "yaha ni aya : " << endl ;
                return {m[diff] , i} ;
            }
            m[nums[i]] = i ;
        }
        return {0,0} ;
    }
};