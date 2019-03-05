/* nama :Dzikri Algiffari
   NPM  :140810180053
   Nama program:
   tanggal buat: 05-03-2019;
*/
#include <iostream>
#include<string.h>
using namespace std;

struct Orang{
	int umur;
	char nama[30];
	char jk[10];
	char goldar[5];
};

int main(){
	Orang orang;
	orang.umur=10;
	cout<<"masukan nama :"<<endl;  cin>>orang.nama;
	cout<<"masukan umur:"<<endl; cin>>orang.umur;
	cout<<"Masukan jenis kelamin"<<endl; cin>>orang.jk;
	cout<<"Masukan goldar :"<<endl; cin>>orang.goldar;
	cout<<orang.nama<<endl;
	cout<<orang.umur<<endl;
	cout<<orang.jk<<endl;
	cout<<orang.goldar<<endl;
	
	
}
