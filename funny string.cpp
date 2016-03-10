#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
        {
        int flag=0;
        string s;
        cin>>s;
        cout<<s;
        int l=s.length();
        char a[l];
        for(int i=0;i<l;i++)
            {
            a[l-i-1]=s.at(i);
        }
         for(int i=1;i<l;i++)
            {
            if(abs(a[i]-a[i-1])!=abs(s.at(i)-s.at(i-1)))
                {
                //cout<<(a[i]-a[i-1])<<" "<<(s.at(i)-s.at(i-1))<<endl;
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"Not Funny\n";
        else
            cout<<"Funny\n";
    }
    return 0;
}
