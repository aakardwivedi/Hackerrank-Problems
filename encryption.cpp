#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> c;
    int k,l,prev,flag=0;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>l;
        c.push_back(l);
    }

    sort(c.begin(),c.end());
    l=0;
    for(int i=0;i<k;i++)
        {
        if(flag==0)
        {
            flag=1;
            prev=c.at(i);
            i++;
           // cout<<prev<<endl;
            l++;
        }
        if(i<k)
        cout<<prev<<" "<<i<<" "<<c.at(i)<<endl;
        if((c.at(i)>(prev+4))&&(i<k))
        {
          //  cout<<"\n"<<c.at(i)<<" pass\n";
            flag=0;
        }

    }
    cout<<l<<"\n";
    return 0;
}
