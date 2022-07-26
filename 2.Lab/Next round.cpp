//Codeforces Problem No - 158A
//Problame name - Next round


#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int arr[a],countn=0;
    for(int i=0;i++<a;)
    {
        cin>>arr[i];
    }
    for(int i=0;i++<a;)
    {
        arr[i]>=arr[b]&&arr[i]!=0?countn++:countn;
    }
    cout<<countn<<endl;
    return 0;
}
