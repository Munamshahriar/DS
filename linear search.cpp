
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, k;
    cin>>n >>k;
    int a[n];
    int c=0;

    for( i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==k)
        {
            cout<<"Yes! We found the Number";
            c=c+1;
            return 0;
        }
    }
    if(c==0)
    {
        cout<<"Didn't found"<<endl;
    }
    return 0;
}


