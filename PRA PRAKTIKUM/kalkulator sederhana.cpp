#include<iostream>
using namespace std;
int main(){
	float a,b,hasil;
	char aritmatika;
	cout<<"================================="<<endl;
	cout<<"|    KALKULATOR SEDERHANA\t|"<<endl;
	cout<<"================================="<<endl;
	cout<<"Masukan Angka Pertama = ";
	cin>>a;
	cout<<"PILIH METODE(+,-,/,*) = ";
	cin>>aritmatika;
	cout<<"Maskukan Angka Kedua = ";
	cin>>b;
	cout<<"====================================="<<endl;
	cout<<"operasi Yang Anda pilih = ";
	cout<<a<<aritmatika<<b;
	if(aritmatika=='+'){
		hasil = a+b;
	}else if(aritmatika=='-'){
		hasil= a-b;
	}else if(aritmatika=='/'){
		hasil= a/b;
	}else if(aritmatika=='*'){
		hasil= a*b;
	}else{
		cout<<"OPERATOR SALAH";
	}
	cout<<"="<<hasil<<endl;
	cout<<endl;
	cout<<"=====================================";
	cin.get();
	return 0;
}
