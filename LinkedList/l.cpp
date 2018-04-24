#include "f.h"
using namespace std;

int main()
{
    int data1 = 0, n = 0, k = 0;
    my_node* head = NULL;
    int answer = 0;

    cout<<"add elemment "
    "to the list"<<endl;
    cin>>data1;
    
    head = new my_node;
    head->data = data1;
    my_node* temp = head;
    showf(head, &k);

    cout<<"press 1 for adding,"
    "2 for inserting into n-th positon, "
    "3 for deleting element"<<endl;
    cin>>answer;

    while(answer == 1 || answer == 2 || answer == 3 )
    {
        switch(answer)
        {
            case 1:
                 addf(&temp);
                 break;

            case 2:
                 cout<<"enter element and postiton "
                 "where u want insert into"<<endl;
                 cin>>data1;
                 cin>>n;
                 while( n > k || n < 0)
                 {
                     cout<<"the range of position "
                     "should be:["<<0<<","<<k<<"]"<<endl;
                     cin>>n;
                 }
                 insertf(&head, data1, n, &temp);
                 
                 break;
                 
            case 3:
                 deletef(head, &temp);
                 break;                  
        }

        k = 0;
        showf(head, &k);
        
        cout<<"press 1 for adding, "
        "2 for inserting to n -th positon, "
        "3 for deleting element"<<endl;
        cin>>answer;
    }
}
