#include <iostream>
#include <vector>
#include <cmath>


int main()
{
    vector<int> a;
    int n,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>b;
        a.push_back(b);

    }
    sort(a.begin(),a.end())
    for(int i=0;i<n;i++)
    {
        cout<<a.at(i)<<endl;

    }
    return 0;
}
