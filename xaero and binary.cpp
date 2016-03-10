#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string a,b;
    int countr=0;
    cin>>a>>b;
    if(a.length()==b.length()){
    for(int i=0;i<a.length();i++)
        {

        if(a.at(i)!=b.at(i))
            {
                countr++;
            for(int j=i;j<b.length();j++)
                if(b.at(j)!=b.at(j+1))
                {
                char temp=b.at(j);
                b.at(j)=b.at(j+1);
                b.at(j+1)=temp;
                break;
            }
        }
    }
    if(a.compare(b)==0)
    cout<<countr;
    }
    else
        cout<<"-1";

    return 0;
}
