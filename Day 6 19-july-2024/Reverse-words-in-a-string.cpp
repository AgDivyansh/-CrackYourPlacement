class Solution {
public:
    string reverseWords(string s) {
        int i = s.size()-1 ;
        while (i >= 0 && s[i] == ' ')
        {
            s.pop_back() ;
            i-- ;
        }
        reverse (s.begin() , s.end()) ;
        // cout << 
        i = s.size()-1 ;
        while (i >= 0 && s[i] == ' ')
        {
            s.pop_back() ;
            i-- ;
        }


        // cout << "afer removing all the extra space " << s << "." << endl ;
        string ans = "" ;
        string var = "" ;

        i = 0;
        s.push_back(' ') ;
        while (i < s.size())
        {
            if (s[i] == ' ')
            {
                if (var.size())
                {
                    // ans += " " ;
                    if (ans.size())
                    {

                    ans.push_back(' ') ;
                    }
                    reverse (var.begin() , var.end()) ;
                    ans += var ;
                    var = "" ;
                }
            }
            else 
            {
                var.push_back(s[i]) ;
            }
            i++ ;
        }
        return ans ;
    }
};