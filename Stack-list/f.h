#include<iostream>
using namespace std;

struct my_node
{
    my_node* next;
    int data;
};

void pushf(my_node** top, int data1)
{
    my_node* temp = *top;
    *top = new my_node;
    (*top)->next = temp;
    (*top)->data = data1;  
}

void popf(my_node** top)
{
    if(*top == NULL)
    {
        cout<<"the stack is empty"<<endl;
    }
    else
    {
        my_node* temp = *top;
        *top = (*top)->next;
        delete(temp);
    }   
}

void topf(my_node* top)
{
    if(top == NULL)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"top is: "<<top->data<<endl;
    }
}

void showf(my_node* top)
{
    if(top == NULL)
    {
        cout<<"the stack is empty"<<endl;
    }
    else
    {
        cout<<"stack is consist of:"<<endl;

        while(top != NULL)
        {
            cout<<top->data<<" ";
            top = top->next;
        }

        cout<<endl;
    } 
}
