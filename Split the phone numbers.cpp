#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;


int main() {
    int n;

    string a,b,c;
    cin>>n;
    int t=n;
    while(t>=0)
        {
        string s;
         getline(cin,s);
        stringstream ss(s);

        char ch;
        ss>>a;  ss.get();
        ss>>b;  ss.get();
        ss>>c;
        if(t!=n)
        cout<<"CountryCode="<<a<<",LocalAreaCode="<<b<<",Number="<<c<<"\n";
    }

    return 0;
}
