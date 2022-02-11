/*---------------------------------------------------------------
              Proverb  : Make a little progress every day         
              AUthor   : CONG   XING                               
              Question : 回文日期                              
              Data     : 2022 - 01 - 24
              Time     : 18:34:06
----------------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int day1[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int day2[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
bool is_huiwen(int n) 
{
    string s1 = "";
    string s2 = "";
    while(n)
    {
        char c;
        c = n%10 + '0';
        s1 = s1 + c;
        s2 = c + s2;
        n = n / 10;
    }
    return s1==s2;
}
bool is_AB(int n)
{
    string s2 = "";
    while(n)
    {
        char c;
        c = n%10 + '0';
        s2 = c + s2;
        n = n / 10;
    }
    string s3 = ""; 
	s3  = s3 + s2[2] + s2[3];
    string s4 = ""; 
	s4 = s4 + s2[0] + s2[1];
    return s3==s4;
}
bool is_data(int n)
{
    int days,month,year;
    int d[10];
    vector<int> ve;
    while(n)
    {
        ve.push_back(n%10);
        n = n / 10;
    }
    days = ve[0] + ve[1] * 10;
    month = ve[2] + ve[3] * 10;
    year = ve[4] + ve[5]*10 + ve[6]*100 + ve[7]*1000;
    ve.clear();
    if(month>12)
    {
        return false;
    }
    if(year%4==0&&year%100!=0||year%400==0)
    {
        if(days>day2[month])
        {
            return false;
        }
    }
    else
    {
        if(days>day1[month])
        {
            return false;
        }
    }
    //cout<<year<<' '<<month<<' '<<days<<endl;
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);                 
    int data;
    cin>>data;
    while(1)
    {
        data++;
        if(is_huiwen(data)&&is_data(data))
        {
            cout<<data<<endl;
          	break;
        }
    }
    while(1)
    {
        if(is_huiwen(data)&&is_data(data))
        {
            if(is_AB(data))
            {
                cout<<data;
                break;
            }
        }
        data++;
    }         
    return 0;                   
}