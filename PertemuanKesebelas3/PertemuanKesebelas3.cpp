#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;

public: 
	Mahasiswa() {
		nim = 0;
		nama = "";
	};
	Mahasiswa(int iNim) {
		nim = iNim;
	};

	Mahasiswa(string mNama) {
		nim = 0;
		nama = mNama;
	};

	Mahasiswa(int iNim, string iNama) {
		nim = iNim;
		nama = iNama;
	};
	void cetak() {
		cout << endl << "Nim = " << nim << endl;
		cout << "Nama = " << nama << endl;
	}
};

int main() {
	Mahasiswa mhs1;
	Mahasiswa mhs2(6);
	Mahasiswa mhs3("Kamilia");
	Mahasiswa mhs4(8, "Kamilia");

	mhs1.cetak();
	mhs2.cetak();
	mhs3.cetak();
	mhs4.cetak();

	return 0;
}