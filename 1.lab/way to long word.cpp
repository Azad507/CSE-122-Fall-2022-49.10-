//Codeforces Problem No - 71A
//Problame name - Way to long words


#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
     char a [100];
    cin>>a;
    int num=strlen(a);
    num>10 ? cout<<a[0]<<num-2<<a[num-1]<<endl:cout<<a<<endl;

    }
    return 0;


}
