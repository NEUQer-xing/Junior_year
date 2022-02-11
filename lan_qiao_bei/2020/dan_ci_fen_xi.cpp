/*---------------------------------------------------------------
              Proverb  : Make a little progress every day         
              AUthor   : CONG   XING                               
              Question : µ¥´Ê·ÖÎö                              
              Data     : 2022 - 01 - 24
              Time     : 16:26:48
----------------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);                 
    string s;
    cin>>s;
    map<char,int> mp;
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        mp[s[i]]++;
    }
    int max_num = 0;
    char max_char ;
    for (char c = 0; c <= 'z'; c++)
    {
        if(mp[c]>max_num)
        {
            max_char = c;
            max_num  = mp[c];
        }
    }
    cout<<max_char<<endl<<max_num;                          
    return 0;                   
}