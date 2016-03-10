#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int t,c,num=0;
    cin>>t;
   vector<long long int> a;
    for(long long int i=0;i<t;i++)
        {
        cin>>c;
        a.push_back(c);
    }
    sort(a.rbegin(),a.rend());

     for(long long int i=0;i<t;i++)
        {
        cout<<a.at(i)<<"   ";
    }
cout<<"\n";
    while(a.at(0)!=0)
        {

        cout<<a.size()<<"\t"<<a.back()<<endl;
        c=a.back();
        for(long long int i=a.size()-1;i>=0;i--)
        {
            cout<<"\n\n\nnew loop\n\n";
            cout<<a.at(i)<<"     ";
        a.at(i)-=c;
            if(a.at(i)==0)
                {
                     cout<<a.at(i)<<"\n";
                    a.erase(a.begin()-i);
                }
             else
                cout<<a.at(i)<<"\n";
        }
    }

    return 0;
}
