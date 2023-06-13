#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
  int c=0;
  int low=0,high=n-1;

    while(low<=high)
        {
            int mid=(low+high)/2;
            if(k==a[mid])
            {
                cout<<"Yes"<<endl;
                c++;
                break;
            }
            if(a[mid]>k)
            {
                high=mid-1;
            }
    if(a[mid]<k)
            {
                low=mid+1;
            }
        }

     if(c==0)
 {
     cout<<"No"<<endl;
 }
    return 0;
}

