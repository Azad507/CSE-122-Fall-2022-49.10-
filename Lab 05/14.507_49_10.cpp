#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    char a1;
    cin>>a;
    for(int i=0;i<a.size();i++)
        for(int j=i;j<a.size();j++)
    {
        if(a[i]>a[j]&&a[j]!='+')
        {
            a1=a[i];
            a[i]=a[j];
            a[j]=a1;
        }
    }
    cout<<a<<endl;
    return 0;
}
