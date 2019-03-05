#include <iostream>
using namespace std;

void MoveZeroToEnd(int arr[],int n){
	int banyak=0;
	for(int i=0;i<n;i++){
		if (arr!=0){
			banyak++;
			arr[banyak++]=arr[i];
		}
	}
	
	while(banyak<0){
		arr[banyak++]=0;
	}
}

void input(int (&arr)[50],int& n){
	for(int i=0; i<n; i++){
		cout<<"Masukan data  :"<<endl; cin>>arr[i];
	}
}

void output(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<"hasil :"<<arr[i]<<",";
	}
}
main(){
	int arr[50],n;
	input(arr,n);
	MoveZeroToEnd(arr,n);
	output(arr,n);
}
