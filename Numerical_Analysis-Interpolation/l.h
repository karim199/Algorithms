#include<iostream>
using namespace std;

double lagrange(int n,double x,double a[], double b[])
{
    int i, j;

    double l1[n]; 
    double l2[n];
    double l3[n];
    double sumofl;
    for(i = 0; i < n; i++)
    {
       l1[i] = 1;
       l2[i] = 1;

       for(j = 0; j < n; j++)
       {
            if(i != j)
            {
                l1[i] = l1[i] * (x - a[j]);
                l2[i] = l2[i] * (a[i] - a[j]);
            }
       }
       
       l3[i]= l1[i] / l2[i] * b[i];
       
       sumofl = sumofl + l3[i];
    }
                    
    return sumofl;
}
