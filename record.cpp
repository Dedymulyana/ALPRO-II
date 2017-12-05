#include <iostream>
using namespace std;

typedef struct {

	int tgl;
	string hari;
	string bulan;
	string tahun;
	} tanggal;


int main () {

	tanggal X;


	cout << "masukan tanggal : ";
	cin >> X.tgl;

	cout << "masukan hari : ";
	cin >> X.hari;

	cout << "masukan bulan : ";
	cin >> X.bulan;

	cout << "masukan tahun : ";
	cin >> X.tahun;

	cout << "============================" <<endl;


	cout << "Tanggal " << X.tgl << " hari " << X.hari << " bulan " << X.bulan << " Tahun " << X.tahun <<endl;

	return 0;
}