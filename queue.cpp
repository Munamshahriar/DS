#include<iostream>
using namespace std;
#define n 3
int Queue[n], Front =-1,rear=-1;

int enQueue(int data)
{
    if(rear>n-1)
    {
        cout<<"Queue is Full"<<endl;
    }
    else
    {
        if(Front==-1)
        {
          Front=0;
        }
          rear++;
          Queue[rear]= data;
          cout<<"EnQueue Value "<<Queue[rear]<<endl;

    }
}

int deQueue()
{
    if(rear==-1 || Front>rear)
    {
       cout<<"DeQueue Empty"<<endl;
    }
    else
    {
        Front++;
        cout<<"Dequeued Value "<<Queue[rear]<<endl;
    }
}


int main()
{
    enQueue(10);
    enQueue(15);
    enQueue(20);
    enQueue(25);
    enQueue(35);
    deQueue();

    cout<< Queue[n]<<endl;
    return 0;
}



