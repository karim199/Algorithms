#include "f.h"

int main()
{
    int n, m, i, e, a;
    cin>>n;//number of vertexes

    vector <int> vx[n];

    for(i = 0; i < n; i++)
    {
        cin>>m;//input in adjacency list format
        while(m > 0)
        {
            cin>>e;
            vx[i].push_back(e);
            m--;
        }    
    }
    
    cout<<"for breadth-first press 1, for depth-first 2"<<endl;
    cin>>a;
    switch(a)
    {
        case 1:
        breadthfirst(vx, n);

        case 2:
        depthfirst(vx,n);
    }
      
}
