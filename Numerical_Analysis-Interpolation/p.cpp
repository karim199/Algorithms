#include "l.h"
#include "n.h"
using namespace std;

int main() 
{
    int i, j;

	  cout<<"for Lagrange press 1, for Newton 2";
    int answ;
    cin>>answ;

       
    cout<<"enter the number of control points:"<<endl;
    int n;        
    cin>>n; 

    cout<<"enter x coordinates of control points"<<endl; 
    double a[n];     
    for(i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    cout<<"enter y coordinates of control points"<<endl;  
    double b[n];      
    for(i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    
    cout<<"enter coordinate x  you are looking for"<<endl;
    double x;        
    cin>>x;

    if(answ == 1)
    { 
        cout<<"answer: "<<lagrange(n, x, a, b)<< endl;      
    }
    else if(answ == 2)
    {
        cout<<"asnwer: "<<newton(n, x, a, b)<< endl;

    }
   
	return 0;
}
