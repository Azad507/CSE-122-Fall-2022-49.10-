
//Problem Name : Tram
//Problem Code : 116A#include <iostream>
using namespace std;
int main()
{
    int n,x,z;
    cin>>n;
    x=0;
    z=0;
    for (int i=0;i<n;i++)
        {
            int a,b;
        cin>>a>>b;
        x-=a;
        x+=b;
        if (x>z)
            {
                z=x;
        }
        }
        cout<<z;return 0;
}
