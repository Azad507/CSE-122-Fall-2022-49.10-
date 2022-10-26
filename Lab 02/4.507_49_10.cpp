
/**CODE NAME : Nearly Lucky Number
CODE NO : 110A
**/
#include <bits/stdc++.h>
using namespace std;

long long n;

main (){
	cin >> n;
	int t=0;
	while (n!=0) {
	if(n%10==4 || n%10==7)
	{ t++;
	}n/=10;}
	if(t==4 || t==7){
		cout << "YES" << endl;
	}else cout << "NO" << endl;
	return 0;
}
