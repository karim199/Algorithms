#include<iostream>
using namespace std;

void mergef(int* a, int l, int mid, int r)
{
    int i;
    int b[mid - l + 1];
    int c[r - mid];

    for(i = 0; i <= mid - l; i++)
    {
        b[i] = a[l+i];
    }

    for(i = 0; i <= r- mid - 1; i++)
    {
        c[i] = a[mid+1+i];
    }

    int x = 0, z = 0, v = l;

    while( x <= mid - l || z <= r - mid -1)
    {
        if(z > r - mid - 1)
        {
            a[v] = b[x];  
            x++;
        }
        else if(x > mid -l)
        {
            a[v] = c[z];
            z++;
        }
        else 
        {

            if(b[x] < c[z])
            {
                a[v] = b[x];
                x++;
            }     
            else 
            {
                a[v] = c[z];
                z++;
            }  
        }

        v++;     
    }

    for( i = l; i <= r; i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<endl;
}

void mergesort(int* a, int l, int r)
{
    if(l < r)
    {
        int mid = (l + r) / 2;

        mergesort(a, l, mid);
        mergesort(a, mid+1, r);
        mergef(a, l, mid, r);
    }
    else  return;
}

int main()
{
    
    int a[1000];
    int n, i;
    cin>>n;

    for(i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    mergesort(a, 0, n-1);

    for(i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}