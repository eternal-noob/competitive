#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
       
    vector<int> v(n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int a;
            cin>>a;
            v[i]+=a;
            v[j]-=a;
            
        }
        
        
    }
   
    for(int i=0;i<n;i++)
    {
        if(v[i]>0)
            sum+=v[i];
            
        }
        cout<<sum;
        
    }

