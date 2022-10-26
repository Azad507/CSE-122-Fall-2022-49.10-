#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int x,y,z,result=0;
    cin>>x>>y>>z;
    cout<<max(0,z*(z+1)/2*x-y);
    return 0;
}
