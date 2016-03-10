#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long int t,n;
    cin>>t;
    while(t--)
        {
        long long int l=0;
        cin>>n;
       if(n!=1)
       {while(n!=1)
            {
            l++;
        if(double(log2(n))-int(log2(n))!=0)
            {
            //cout<<(double(log2(n))-int(log2(n)))<<endl;
            n=n-pow(2,int(log2(n)));
           // cout<<n<<'\n';
        }
        else
           { n=n/2;
            //cout<<n<<"\n";
           }
        }
        if(l%2==1)
            cout<<"Louise\n";
        else
            cout<<"Richard\n";
    }
        else
            cout<<"Richard\n";
}

    return 0;
}
