
//Codeforces Problem No -59A
//Problame name -Word
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int x,y,z=0;
    cin>>x>>y;
    t:if(!(x>y))
    {
        x*=3;
        y*=2;
        z++;
    }
    if(!(x>y))
    {
        goto t;
    }
    cout<<z<<endl;
    return 0;
}
