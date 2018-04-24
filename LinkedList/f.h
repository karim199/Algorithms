#include<iostream>
using namespace std;

struct my_node
{
    int data;
    my_node* next = NULL;
};

void addf(my_node **temp)
{
    int data1;
    
    (*temp)->next = new my_node; 
    (*temp) = (*temp)->next;

    cout<<"add element to the list:"<<endl;
    cin>>data1;
 
    (*temp)->data = data1;

    return;              
}

void insertf(my_node **head, int data1, int n, my_node** tempreal)
{
    my_node* temp1 = *head;
    my_node* temp2 = NULL;

    if(n == 0)
    {
        *head = new my_node;
        (*head)->data = data1;
        (*head)->next = temp1;
    }
    else
    {
        while(n - 1 > 0)
        {
        temp1 = temp1->next;
        n--;
        }
    
        temp2 = temp1->next;    
        temp1->next = new my_node;    
        temp1 = temp1->next;   
        temp1->data = data1;
        temp1->next = temp2;  

        if(temp2 == NULL)
        {
            *tempreal = temp1;
        }
    }

    return;
}

void deletef(my_node* head ,my_node** realtemp)
{
    my_node* temp1 = head;
    my_node* temp2 = NULL;
    int  n = 0;

    cout<<"enter postiton where u"
    " want delete element from"<<endl;
    cin>>n;

    while(n - 1 > 0)
    {
        temp1 = temp1->next;
        n--;
    }
    
    temp2 = temp1->next->next;
    delete(temp1->next);    
    temp1->next = temp2;

    if(temp2 == NULL)
    {
        *realtemp = temp1;
    }

    return;    
}

void showf(my_node* head, int* k)
{
    cout<<"now the list is consist of:"<<endl;

    my_node* temp2 = head;

    while(temp2 != NULL)
    {
        cout<<temp2->data<<" ";
        temp2 = temp2->next;
        (*k)++;
    }

    cout<<endl;

    return;
}
