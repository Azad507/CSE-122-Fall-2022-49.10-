#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
     string a;
    cin>>a;
    int num=a.size();
    num>10 ? cout<<a[0]<<num-2<<a[num-1]<<endl:cout<<a<<endl;

    }
    return 0;


}
