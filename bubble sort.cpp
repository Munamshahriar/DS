#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int Swap=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1] = temp;
                Swap = 1;
            }
        }
        if(Swap==0)
        {
            break;
        }
    }
    cout<<"After Sorting: ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
return 0;
}

