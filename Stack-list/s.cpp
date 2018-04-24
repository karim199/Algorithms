#include"f.h"

int main()
{
    my_node* top = NULL;
    int answer = 1;
    int data1;

    while(answer == 1 || answer == 2 || answer == 3)
    {
        switch(answer)
        {
            case 1:
                cout<<"enter element to push into the stack"<<endl;
                cin>>data1;
                pushf(&top, data1);
                showf(top);
                break;

            case 2:
                popf(&top);
                showf(top);
                break;

            case 3:
                topf(top);
                showf(top);
                break;                
        }
        cout<<"press 1 for pushing,"
        " 2 for popping,"
        " 3 for showing top"<<endl;

        cin>>answer;       
    }
}
