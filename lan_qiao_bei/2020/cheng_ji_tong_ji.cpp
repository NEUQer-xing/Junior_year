/*---------------------------------------------------------------
              Proverb  : Make a little progress every day         
              AUthor   : CONG   XING                               
              Question : ³É¼¨Í³¼Æ                              
              Data     : 2022 - 01 - 24
              Time     : 18:01:02
----------------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);                 
    int n;
    cin>>n;
    int good = 0;
    int ji_ge = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if(x>=60) 
        {
            ji_ge++;
        }
        if (x>=85) 
        {
            good++;
        }
    }    
    double jige,youxiu;
    jige = ji_ge*1.0/n;
    youxiu = good*1.0/n;
    jige = jige*100;
    youxiu = youxiu*100;
    cout<<fixed<<setprecision(0)<<jige<<"%"<<endl;
    cout<<fixed<<setprecision(0)<<youxiu<<"%";
    return 0;                   
}