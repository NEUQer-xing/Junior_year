/*---------------------------------------------------------------
              Proverb  : Make a little progress every day         
              AUthor   : CONG   XING                               
              Question : ÌøÔ¾                              
              Data     : 2022 - 01 - 20
              Time     : 23:10:20
----------------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int grid[105][105];
int x[3] = {-1,-2,-3};
int y[3] = {-1,-2,-3};
int dp[105][105];
int main()
{               
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>grid[i][j];
        }
    }
    dp[0][0] = grid[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int maxx = INT_MIN;
            vector<int> ve;
            for (int k = 0; k < 3; k++)
            {
                if(i+x[k]>=0)
                {
                    ve.push_back(dp[i+x[k]][j]);
                }
                if(j+y[k]>=0)
                {
                    ve.push_back(dp[i][j+y[k]]);
                }
            }
            sort(ve.begin(),ve.end());
            if(ve.empty()!=1)
            {
                maxx = ve[ve.size()-1];
                dp[i][j] = grid[i][j] + maxx;
            }
            ve.clear();
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout<<dp[i][j]<<' ';  
    //     }
    //     cout<<endl;
    // }   

    cout<<dp[n-1][m-1];           
    return 0;                   
}