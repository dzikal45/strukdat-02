/* nama :Dzikri Algiffari
   NPM  :140810180053
   Nama program:
   tanggal buat: 05-03-2019;
*/
#include <iostream>
#include<string.h>
using namespace std;
struct Theater{
	int room;
	char seat[3];
	char movieTitle[30];
};
int main(){
	Theater film;
	film.room=7;
	strcpy(film.seat,"J9");
	strcpy(film.movieTitle,"Adit&jarwo");
	cout<<film.room<<endl;
	cout<<film.seat<<endl;
	cout<<film.movieTitle<<endl;

	
}
