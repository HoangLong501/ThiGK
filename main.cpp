#include <iostream>
using namespace std;



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