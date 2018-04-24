#include<iostream>
#include<stack>
#include<string>
using namespace std;

void showstack(stack <char> gq)
{
    stack <char> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}

int main()
{
    int i;
    bool check = false;
    string s;
    stack <char> store;

    cout<<"input statement with parentheses, f.e: ({} {[]})"<<endl;
    cin>>s;

    for( i = 0; i < s.length(); i++)
    {
        if(s[i] == ')' || s[i] == ']' || s[i] == '}')
        {
            if(store.empty() == false)
            {
                if(store.top() == '(' && s[i] == ')' || store.top() == '[' && s[i] ==']'|| store.top() == '{' && s[i] =='}' )
                {
                    store.pop();
                    cout<<"dsd"<<endl;                
                }
                else
                {
                    cout<<"Not balanced"<<endl;
                    check = true;
                    break;
                    
                } 
            }
            else
            {
                cout<<"Not balanced"<<endl;
                check = true;
                break;
                            
            }           
        }
        else
        {
            store.push(s[i]);
            showstack(store); 
        }
        if(check == true)
        {
            break;
        }        
    }

    if(store.empty() && check == false)
    {
        cout<<"balanced"<<endl;
    }
    else if(store.empty() == false && check == false)
    {
        cout<<"Not balanced";
    }
}
