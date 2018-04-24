#include<iostream>
using namespace std;

double newton(int n,double x,double a[], double b[])
{
    int i, j, k, t = 1;
    double mult[n], bolhed1[n], bolhed2[n], X[n];

    for(k = 0; k < n; k++)
    {
       bolhed2[k] = 0;
       
       for(i = 0; i < t; i++)
       {
            mult[i] = 1;

            for(j = 0; j < t; j++)
            {
                if(i != j)
                mult[i] = mult[i]*(a[i] - a[j]);
            }

            bolhed1[i] = b[i]/mult[i];
            
            bolhed2[k] = bolhed2[k] + bolhed1[i];           
       }

       if(t < n)
       {
           t++;
       }        
    }

   
    for( i = 0; i < n; i++)
    {
        X[i] = 1;
        
        for(j = 0; j < i; j++)
        {
            X[i] = X[i]*(x - a[j]);         
        }

    }
    
    double sum;   
    for( i = 0; i < n; i++)
    {
        sum = sum + bolhed2[i]*X[i];
    }
    
    return sum;

}
