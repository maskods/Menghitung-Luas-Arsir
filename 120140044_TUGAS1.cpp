#include <iostream>
using namespace std;

int main() {
	// Membuat data variabel
	const float PI = 3.14;
	float diagonal = 20, r, luasLingkaran, luasKetupat, luasArsir;
	
	// Mencari nilai jari-jari
	r = 0.5 * diagonal;
	
	//Menghitung Luas Lingkaran
	luasLingkaran = PI * r * r;
	
	//Menghitung Luas Belah Ketupat
	luasKetupat = 0.5 * diagonal * diagonal;
	
	// Menghitung Luas yang di Arsir
	luasArsir = luasLingkaran - luasKetupat;
	
	// Menampilkan Luas Lingkaran
	cout << "Luas daerah yang diarsir : " << luasArsir << " cm^2" << endl;
	
	return 0;
}
