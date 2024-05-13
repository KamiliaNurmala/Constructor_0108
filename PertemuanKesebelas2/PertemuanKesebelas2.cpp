#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	static long long int nim;
public:
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; }
	static int getNim() { return nim; }

	mahasiswa(string pnama) : nama(pnama) { setID(); }
};

long long int mahasiswa::nim = 20230140108;

void mahasiswa::setID() {
	id = ++nim;
}

void mahasiswa::printAll() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {

	mahasiswa mhs1("Kamilia Nurmala");
	mahasiswa mhs2("Sekar Asri");
	mahasiswa mhs3("Yowanda Radilla");
	mahasiswa mhs4("Zahwa Anritia");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl;
	return 0;
}