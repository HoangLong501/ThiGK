#include <iostream>
using namespace std;

void main(){
	int n;
	cout<<"Nhap n ";
	cin>>n;
	if(ktHoanThien(n)==true)
		cout<<"hoan thien";
	else cout<<"khong ht";
	
	if(ktChinhphuong(n)==true)
		cout<<"chinh phuong";
	else cout<<"khong cp";
}

bool ktHoanThien(int n){
	if((int)sqrt(n)==sqrt(n))
		return true;
	return false;
	

	
}

bool ktChinhphuong(int cp){
		int s=0;
		for(int i=0;i<n;i++){
			if(cp%i==0)
				s+=i;
		}
		return s==n;

}