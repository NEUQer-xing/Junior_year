// /*---------------------------------------------------------------
//               Proverb  : Make a little progress every day         
//               AUthor   : CONG   XING                               
//               Question : ◊Ó…ŸÌ¿¬Î                              
//               Data     : 2022 - 01 - 20
//               Time     : 16:29:13
// ----------------------------------------------------------------*/
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);                 
//     int n;
//     cin>>n;
//     int a,t,sum; 
//     a = 1;
//     t = 1;
//     sum = 1;
//     while(1)
//     {
//       if(sum>=n)
//       {
//         break;
//       }
//       a++;
//       t = t * 3;
//       sum = sum + t;
//     }      
//     cout<<a;          
//     return 0;                   
// }

/*---------------------------------------------------------------
              Proverb  : Make a little progress every day         
              AUthor   : CONG   XING                               
              Question :       
              Data     : 2022 - 01 - 20
              Time     : 20:42:06
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
    vector<int> ve;
    while(n)
    {
      ve.push_back(n%3);
      n = n / 3;
    } 
    for(int i=0;i<ve.size();i++)          
    {
      if(ve[i]==2)
      {
        ve[i] = -1;
        if(i+1==ve.size())
        {
          ve.push_back(1);
        }
        else
        {
          ve[i+1]++;
        }
      }
      else if(ve[i]==3)
      {
        ve[i] = 0;
        if(i+1==ve.size())
        {
          ve.push_back(1);
        }
        else
        {
          ve[i+1]++;
        }
      }
    }
    int ans = ve.size();
    cout<<ans;
    return 0;                   
}