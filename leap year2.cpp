#include <bits/stdc++.h>
using namespace std;

void solve(int n,int m)
{
    for(int i=n; i<=m; i++)
    {
      if(i%4==0 && i%100!=0 || i%400==0)
        {
             cout<< "Leap year"<<endl;
        }
        else
        {
            cout<< "Not Leap year"<<endl;

        }
    }

}

int main()
{
    int i,n,m;
    cin>>n>>m;
    solve(n,m);


   return 0;

}

