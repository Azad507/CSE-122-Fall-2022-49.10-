
//Codeforces Problem No -977A
//Problame name -Wrong Subtraction
#include<iostream>
using namespace std;
int main()
{
    int z,t,r;
    cin>>z>>t;
    while(t--)
        z%10==0?z/=10:z--;
        cout<<z;
}
