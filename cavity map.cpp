#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n;
    cin>>n;
    int a[n][n],c,b[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];

        for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
           {
            cout<<a[i][j];

           }
     cout<<"\n";
    }
 for(int i=1;i<n;i++)
       { for(int j=1;j<n;j++)
        {
        c=a[i][j];
        if((a[i-1][j]<c)&&(a[i+1][j]<c)&&(a[i][j+1]<c)&&(a[i][j-1]<c))
          b[i][j]=0;
        else
            b[i][j]=c;
        }
       }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
           {    if(b[i][j]!=0)
            cout<<b[i][j];
            else
                cout<<"X";
           }
     cout<<"\n";
    }
    return 0;
}
