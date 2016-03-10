#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int t,n,sumb=0,suma=0,flag=0;
    cin>>t;
    while(t--)
        {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            {
            cin>>arr[i];
            suma+=arr[i];
        }
        for(int i=0;i<n;i++)
            {
            suma-=arr[i];

            if(suma==sumb)
                {flag=1;
                //cout<<suma<<" "<<sumb<<"\n";
                break;}
            sumb+=arr[i];
        }

 if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
        flag=suma=sumb=0;


    }

    return 0;
}
