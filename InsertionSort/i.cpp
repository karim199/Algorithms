#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
    int a[1000];
    int i, j, n, store;
    
    cin>>n;
    
    for( i = 0; i < n; i++)
	  {
    	cin>>a[i];
	  }
	
	for( i = 1; i < n; i++)
	{
		store = a[i];
		
		for(j = i - 1; j >= 0; j--)
		{
			if(store < a[j])
			{
				a[j+1] = a[j];
				if(j == 0)
				{
					a[0] = store;
				}	
			}
			else 
			{
				a[j+1] = store; 
				break;
			}	
		}
	}
	
	cout<<"array after sorting:"<<endl;
	
	for( i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}








