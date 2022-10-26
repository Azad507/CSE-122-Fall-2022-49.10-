#include<iostream>
using namespace std;
int main()
{
    int c=0,j=0;
    string x;
    cin>>x;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='4'||x[i]=='7')
            c++;
        else
            j++;
    }
    if(c==4||c==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
