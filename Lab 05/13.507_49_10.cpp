#include<iostream>
#include<string>
#include<string.h>
using namespace std;
string tolower(string c)
{
    for(int i=0;i<c.size();i++)
    {
        c[i]=tolower(c[i]);
    }
    return c;
}
int main()
{
    string a;
    cin>>a;
    string a1=tolower(a);
    string b;
    cin>>b;
    string b1=tolower(b);
    if(a1==b1)
    {
        cout<<"0";
    }
    else if(a1<b1)
        cout<<"-1";
    else
        cout<<"1";
}

