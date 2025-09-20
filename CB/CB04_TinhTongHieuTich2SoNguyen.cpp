//Viết chuong trình cho phép nh?p vào 2 s? nguyên a và b. Tính và in ra t?ng , hi?u , tích  và thuong
#include <bits/stdc++.h>
using namespace std;

int main () {
	float a,b;
	cin>>a>>b;
	cout<<a+b<<endl;
	cout<<a-b<<endl;
	cout<<a*b<<endl;
	if(b==0)
		cout<<"ERROR";
	else
		cout<<fixed<<setprecision(2)<<a/b<<endl;
	return 0;
}
