//1. - int nilai;
//   - string nama;
//   - char pilih;

//2. if (nRerata > 60 || nMatematika > 70) {
//    status = "Lulus";
//   }
//   else {
//     status = "Tidak Lulus";
//    }

//3. struct DetailAlamat {
//    string desa;
//	  string kota;
//   };
//   struct Mahasiswa {
//	   string nim;
//	   string nama;
//	   DetailAlamat alamat;
// 	   string umur;
//   };

//4.string nama;
//  int nXpander, nPorsche, nAvanza, nBrio, nLamborghini;
//  int hXpander = 300, hPorsche = 8000, hAvanza = 250, hBrio = 200, hLamborghini = 6000;

//void input() {
//    cout << "Nama Pembeli : ";
//    cin >> nama;
//    cout << "Jumlah Xpander: ";
//    cin >> nXpander;

//    cout << "Jumlah Porsche: ";
//    cin >> nPorsche;

//    cout << "Jumlah Avanza: ";
//    cin >> nAvanza;

//    cout << "Jumlah Brio: ";
//    cin >> nBrio;

//    cout << "Jumlah Lamborghini: ";
//    cin >> nLamborghini;
// }

//  int TotalHarga() {
//     return (nXpander * hXpander) + (nPorsche * hPorsche) + (nAvanza * hAvanza) + (nBrio * hBrio) + (nLamborghini * hLamborghini);
// }

//  void Display() {
//     cout << "Total Harganya : " << TotalHarga() << endl;
//  }

//5.int main() {
//    char pilihan;

//     do {
//       cout << "Berangkat ambil takjil" << endl;
//       cout << "Antri Takjil" << endl;
//       cout << "Ambil Takjil" << endl;
//       cout << "Apakah mau antri kembali ?" << endl;
//      cin >> pilihan;
//    } while (pilihan == 'y' || pilihan == 'Y');
// }

//6.
#include <iostream>
using namespace std;

int main() {
	int nBahasa inggris, nMatematika;
	string status;

	cout << "Masukkan Nilai Bahasa inggris = " << endl;
	cin >> nBahasa inggris;
	cout << "Masukkan Nilai matematika = " << endl;
	cin >> nMatematika;

	nRerata = (nBahasa inggris + nMatematika) / 2;

	if (nRerata > 70 || nMatematika > 80) {
		status = "Lulus";
	}
	else {
		status = "Tidak Lulus";
	}
	cout << "Anda dinyatakan : " << status;
	return 0;

	char pilihan;

	do {
		cout << "Apakah ingin Mengulang program? " << endl;
		cin >> pilihan;
	} while (pilihan == 'y' || pilihan == 'Y');
}