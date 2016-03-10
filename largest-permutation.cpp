#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n,k;
    cin>>n>>k;
    long long int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    long long int i=0;
    while(k--)
        {long long int max=a[i],l=i;
        for(int j=i+1;j<n;j++)
            {
            if(max<a[j])
                {
                max=a[j];
                l=j;
            }


        }
        a[l]=a[i];
            a[i]=max;
         i++;
    }
   // cout<<"\n\n\n";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
