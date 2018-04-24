#include <iostream>
using namespace std;

long long int recursion(long long int n)
{	
   if(n==1)
   {
	 return  1; 
	 }
	 else return  n * recursion(n - 1);
}

int main()
{
	long long int n;
	cin>>n;
  
	if( n == 0)
	{
	    cout<<1;
	}
	else
	{
	cout<<"using recursion: "<<recursion(n)<<endl;
  
	long long int v = 1, i;
	for( i = 1; i <= n;i++)
  {
		v = i * v;
	}
	
	cout<<"using iteration: "<<v;
	}
  
	return 0;
}
