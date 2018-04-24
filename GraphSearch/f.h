#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

void breadthfirst(vector <int> vx[], int n)
{
    int i, j;
    bool vis[n];
    for(i = 1; i < n; i++)
    {
        vis[i] = false;
    }
    vis[0] = true;

    queue <int> vstore;
    vstore.push(0);
    i = 0;

    while(vstore.empty() == false)
    {
        vstore.pop();

        cout<<i<<" ";

        for(j = 0; j < vx[i].size(); j++)
        {
            if(vis[vx[i][j]] == false)
            {
                cout<<vx[i][j]<<" ";
                vstore.push(vx[i][j]);
                vis[vx[i][j]] = true;
            }
        }

        if(!vstore.empty())
        {
            i = vstore.front();            
        }

        cout<<endl;     
    }
}

void depthfirst(vector <int> vx[], int n)
{
    bool vis[n];
    int i, j;
    for(i = 1; i < n; i++)
    {
        vis[i] = false;
    }
    vis[0] = true;

    stack <int> vstore;
    vstore.push(0);
    i = 0;

    while(vstore.empty() == false)
     {
         vstore.pop();

        cout<<i<<" ";

         for(j = 0; j < vx[i].size(); j++)
         {
             if(vis[vx[i][j]] == false)
             {
                 cout<<vx[i][j]<<" ";
                 vstore.push(vx[i][j]);
                 vis[vx[i][j]] = true;
             }
         }

         if(!vstore.empty())
         {
             i = vstore.top();            
         }

         cout<<endl;     
     }
}
