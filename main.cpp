#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Nhap vao n so nguyen";
	cin>>n;
	return 0;
}

bool ktHoanThien(int n){
	if((int)sqrt(n)==sqrt(n))
		return true;
	return false;
	
}