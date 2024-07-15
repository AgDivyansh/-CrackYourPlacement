
#include<iostream>
#include<string>
#include<map>
#include<unordered_map>
using namespace std ;


int main ()
{
    string s ;
    cout << "Enter the string" ;
    cin >> s ;
    unordered_map<char , int> m ;
    for (int i = 0 ; i < s.size() ; i++)
    {
        m[s[i]]++ ;
    }
    for (auto i : m)
    {
        if (i.second == 2)
        {
            cout << i.first << " " ;
        }
    }
}