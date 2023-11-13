#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Nhap vao n so nguyen";
	cin>>n;
	if(ktChinhphuong(n)==true){
			cout<<"chinhphuong";
	}else cout<<"ko phai cp";
	return 0;
	
	
}

bool ktChinhphuong(int cp){
		int s=0;
		for(int i=0;i<n;i++){
			if(cp%i==0)
				s+=i;
		}
		return s==n;
}