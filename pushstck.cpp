#include<iostream>
using namespace std;
int main()
{
    int MAXSTACK=100;
    int stack[MAXSTACK];
    int top=0;
    int item=10;
    if(top==MAXSTACK)
    {
        cout<<"Overflow";
    }
    else
    {
        top=top+1;
        stack[top]=item;
    }

    cout<<"top element:"<<stack[top]<<endl;
}