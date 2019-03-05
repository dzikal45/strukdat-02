/* nama :Dzikri Algiffari
   NPM  :140810180053
   Nama program: exercise-02
   tanggal buat: 05-03-2019;
*/	
#include <iostream>
using namespace
 std;
struct pegawai{
	char nip[2];
	char nama[10];
	int gol;
	
}; typedef pegawai pegawai[10];

void banyakData(int& n){

	cout<<"Masukan banyak pegwai :"; cin>>n;
	}
void input(pegawai& p,int n){
	for(int i=0;i<n;i++){
		cout<<"Masukan nama :"; getline(cin,p[i].nama);
		cout<<"Masukan Nip :";cin>>p[i].nip;
		cout<<"Masukan golongan:"; cin>>p[i].gol;
	}
}
void urutanPegawai(pegawai p,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			int temp;
			if(p[j].nip>p[j+1].nip){
				temp=p[j].nip;
				p[j].nip=p[j+1].nip;
				p[j+1].nip=temp;
			}
		}
	}

}
void golongan(pegawai p,int gaji[100],int n){
	for(int i=0;i<n;i++){
		if(p[i].gol==1){
			gaji[i]=2000000;
		}
		else if(p[i].gol==2){
			gaji[i]=3000000;
		}
		else if(p[i].gol==3){
			gaji[i]=5000000;
		}
		else (p[i].gol==4){
			gaji[i]=8000000;
		}
		
	}
}
void rataGaji(int gaji[100],int n){
	int jumlah;
	for(int i=0;i<n;i++){
		jumlah=+gaji[i];
	}
	int rata;
	rata=jumlah/n;
	cout<<"rata gaji="<<rata<<endl;
}
void terendah(int gaji[100],int n){
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(gaji[j]>gaji[j+1]){
				temp=gaji[j];
				gaji[j]=gaji[j+1];
				gaji[j+1]=temp;
			}
		}
	}
	cout<<"gaji terendah= "<<gaji[0];
	cout<<"gaji tertinggi="<<gaji[n-1];
}
void output(pegawai p,int n, int gaji[100]){
	for(int i=0;i<n;i++){
		cout<<"nama :"<<p[i].nama<<endl;
		cout<<"Nip :"<<p[i].nip<<endl;
		cout<<"golongan:"<<p[i].gol<<endl;
		cout<<"Gaji:"<<gaji[i]; 
	}
}


main(){
	gaji [100];
	int n;
	pegawai p;
	banyakData(n);
	input(p,n);
	urutanPegawai(p,n);
	golongan(p,gaji,n);
	rataGaji(gaji,n);
	terendah(gaji,n);
	output(p,n,gaji);
	
}


