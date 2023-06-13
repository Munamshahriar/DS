#include <iostream>
using namespace std;

void year(int n)
{


      if(n%4==0 && n%100!=0 || n%400==0)
        {
             cout<<"Leap year"<<endl;
        }
        else{
            cout<<"Not Leap year"<<endl;
    }

}

int main()
{
    int i,n,m;
    cin>>n;
    year(n);


   return 0;

}

