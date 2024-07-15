class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = "" ;
        int ct = 0 ;
        str = strs[0] ;
        int len = strs[0].size() ;
        for (int i = 0 ; i < strs.size() ; i++)
        {

            if (strs[i].size() > len)
            {
                len = strs[i].size() ;
                str = strs[i] ;
            }
        }

        for (int i = 0 ; i < str.size() ; i++)
        {
            for (int j = 0 ; j < strs.size() ; j++)
            {
                if (strs[j][i] != str[i])
                {
                    return str.substr(0,ct) ;
                }
            }
            ct++ ;
        }

    return str.substr(0,ct) ;

    }
};