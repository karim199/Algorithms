#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[1000];
	int i, j, n, min , temp, index;
	
	cin>>n;
	
	for(i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	
	for(i = 0; i < n - 1; i++)
	{ 
	    min = a[i];
	    index = i;
	    
		for(j = i + 1; j < n; j++)
		{
			if( a[j] < min)
			{
				min = a[j];
				index = j;
			}	
		}
		
		temp = a[i];
		a[i] = a[index];
		a[index] = temp;
    }
	
	cout<<"array after sorting:"<<endl;
	
	for( i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}
