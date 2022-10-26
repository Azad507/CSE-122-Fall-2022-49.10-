#include<iostream>
using namespace std;
int main()
{
    int a,b=0;

    cin>>a;
    while(a--)
    {
         char c[10];
        cin>>c;
        if(c[1]=='+')
        {
            b++;
        }
        else
        {
            b--;
        }
    }
    cout<<b;
}
