class Solution {
public:
bool ispalindrome (string s , int i , int j)
{
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false; 
        }
        i++ ;
        j-- ;
    }
    return true ;
}
    bool validPalindrome(string s) {
        int i = 0 ;
        int j = s.size()-1 ;
        bool flag = true ;
        while (i <= j)
        {
            if (s[i] == s[j])
            {
                i++ ;
                j-- ;
            }
            else 
            {
                return ispalindrome(s , i+1 , j) || ispalindrome(s , i , j-1) ;
            }
        } 
        return true ;
    }
};