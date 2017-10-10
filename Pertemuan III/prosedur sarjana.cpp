#include <iostream>
using namespace std;


void prosedurSD ();
void prosedurSMP();
void prosedurSMK();
void prosedurPT();


int main() {

	prosedurSD();
	prosedurSMP();
	prosedurSMK();
	prosedurPT();
	return 0;

}


void prosedurSD () {
	cout << "PROSEDUR SD" <<endl;
	cout << "1. Daftar Sekolah Dasar" <<endl;
	cout << "2. masuk kelas I SD"<<endl;
	cout << "3. masuk kelas II SD"<<endl;
	cout << "4. masuk kelas III SD"<<endl;
	cout << "5. masuk kelas IV SD"<<endl;
	cout << "6. masuk kelas V SD"<<endl;
	cout << "7. masuk kelas VI SD"<<endl;
	cout << "8. lulus Sekolah Dasar"<<endl;
}

void prosedurSMP() {
	cout << "PROSEDUR SMP" <<endl;
	cout << "1. Daftar Sekolah Menengah Pertama"<<endl;
	cout << "2. masuk kelas I SMP"<<endl;
	cout << "3. masuk kelas II SMP"<<endl;
	cout << "4. masuk kelas III SMP"<<endl;
	cout << "5. Lulus Sekolah Menengah Pertama"<<endl;
}

void prosedurSMK() {
	cout << "PROSEDUR SMK" <<endl;
	cout << "1. Daftar Sekolah Menengah Kejuruan"<<endl;
	cout << "2. masuk kelas I SMK"<<endl;
	cout << "3. mausk kelas II SMK"<<endl;
	cout << "4. masuk kelas III SMK"<<endl;
	cout << "5. lulus Sekolah Menengah Kejuruan"<<endl;
}

void prosedurPT() {
	cout << "PROSEDUR PT" <<endl;
	cout << "1. Daftar Perguruan Tinggi"<<endl;
	cout << "2. Masuk semester I"<<endl;
	cout << "3. Masuk semester II"<<endl;
	cout << "4. asuk semester III"<<endl;
	cout << "5. Masuk semester IV"<<endl;
	cout << "6. Masuk semester V"<<endl;
	cout << "7. Masuk semeste VI"<<endl;
	cout << "8. Masuk semester VII"<<endl;
	cout << "9. Masuk semester VIII"<<endl;
	cout << "10. Mulai Skripsi"<<endl;
	cout << "11. Sidang"<<endl;
	cout << "12. Menjadi Seorang Sarjana"<<endl;
}