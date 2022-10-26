

//Codeforces Problem No -59A
//Problame name -Word
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string x;
    cin>>x;
    int t=0,c=0,z=0;
    while(t<x.size())
    {
        if(x[t]>=97&&x[t]<=122)
            c++;
        else
            z++;

            t++;
    }
    if(c<z)
        transform(x.begin(),x.end(),x.begin(),::toupper);

    else if(c>z)
        transform(x.begin(),x.end(),x.begin(),::tolower);
    else
        transform(x.begin(),x.end(),x.begin(),::tolower);
        cout<<x<<endl;
        return 0;

}
