//Codeforces Problem No - 231A
//Problame name - Team


#include<iostream>
#include<string>
using namespace std;
int main()
{
   int a,b,c,i=0,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        a+b+c>=2?i++:0;
    }
    cout<<i<<endl;
    return 0;
}
