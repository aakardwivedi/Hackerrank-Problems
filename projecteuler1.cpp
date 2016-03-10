#include<iostream>

using namespace std;

int main()
{
    int t,n,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=3;i<n;i++)
        {
            if(i%3==0)
                sum+=i;
            else if(i%5==0)
                sum+=i;
        }
        cout<<sum<<endl;
    }
}
