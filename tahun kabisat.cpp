#include <iostream>
using namespace std;
int main()
{
		cout<< "Masukan tahun : ";
	int a;
	cin>>a;
	if(a %400==0 || a %4==0 && a %100!=0){
		cout<< "Tahun "<<a<<" adalah Tahun Kabisat";
	}
	else{
		cout<<"Bukan Tahun Kabisat";
	}
	return
	0;
	}
