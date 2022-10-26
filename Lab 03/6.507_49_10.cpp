
//Codeforces Problem No - 4A
//Problame name - Wtarmelon
#include<iostream>
#include<string>
using namespace std;
void sol(string a)
{
    int num=stoi(a);
    (num%2==0)&&(num>2)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
int main()
{

        string a;
    getline(cin,a);
    sol(a);

    return 0;
}
