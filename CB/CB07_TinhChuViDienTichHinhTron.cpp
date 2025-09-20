//Viết chương trình tính chu vi, diện tích của hình tròn. Bán kính r là một số thực được nhập từ bàn phím
#include <bits/stdc++.h>
using namespace std;

//#define PI 3.14;

int main (){
	float r;
	float PI = 3.14;
	cin>>r;
	cout<<fixed<<setprecision(3)<<2*r*PI<<" "<<r*r*PI;
	return 0;
}
