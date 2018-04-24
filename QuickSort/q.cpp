#include<iostream>
using namespace std;

void quicksort(int* a, int l, int r)
{
    if(l < r)
    {     
        int pivot = r;
        int i, temp1, temp2, k = 0;
        
        for(i = l; i <= pivot; i++)
        {
            if(a[i] > a[pivot] && (pivot - i) >= 2)
            {
                temp1 = a[pivot];
                temp2 = a[pivot-1];

                a[pivot] = a[i];
                a[pivot-1] = temp1;
                a[i] = temp2;

                pivot--;
                k++;
                i--;
            }            
            else if(a[i] > a[pivot] && (pivot - i) <= 2)
            {               
                temp1 = a[pivot];
                a[pivot] = a[i];
                a[i] = temp1;
                pivot--;
                k++;
                i--;
            }
        }
                  
        int newpivot = r - k;
        quicksort(a, l, newpivot - 1); 
        quicksort(a, newpivot + 1, r); 
    }
    else return;    
}

int main()
{
    int a[1000];
    int i, n;

    cin>>n;

    for(i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    quicksort(a, 0 ,n-1);

    for(i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}