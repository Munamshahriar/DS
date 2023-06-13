
#include<iostream>
#include<conio.h>
using namespace std;
#define n 2
int top =-1;
int arr[n];

void push(int x)
{
    if(top>n-1)
    {
        cout<<"stack overflow! Stack is Full."<<endl;
    }
    else
    {
        top=top+1;
        arr[top]=x;
        cout<<arr[top]<<endl;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"stack underflow! No element to pop."<<endl;

    }

    else
    {
        cout<<"Top element "<<arr[top]<<" was removed"<<endl;
        top=top-1;
    }
}
void Top()
{
    if(top==-1)
    {
        cout<<"stack is empty! "<<endl;
    }
    else
    {
        cout<<"Top element is " <<arr[top]<<endl;
    }
}
bool isempty()
{
    if(top==-1)
    {
        return true;

    }
    else
    {
        return false;
    }
}

int main()
{
isempty();
pop();
push(5);
push(10);
Top();
push(15);
push(20);
pop();
pop();
pop();
pop();
isempty();

return 0;
getch();

}
