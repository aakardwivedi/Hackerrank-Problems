#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string input;
    cin>>input;
    cout<<input<<"\n";
    stringstream stream(input);
    while(stream.eof()) {
   int n;
   stream >> n;

     stream.get();
   std::cout << "Found integer: " << n << "\n";
}
}
