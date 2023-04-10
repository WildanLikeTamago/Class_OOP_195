#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "NIM = " << nim;
		cout << "\nNama = " << nama;
	}
};

class Matakuliah {
private:
	int sks;
	string kode;
	string namaMK;
public:
	void inputMk() {
		cout << "\nMasukkan jumlah SKS = ";
		cin >> sks;
		cout << "Masukkan Kode MK = ";
		cin >> kode;
		cout << "Masukkan Nama MK = ";
		cin >> namaMK;
	}

	void tampilMK() {
		cout << "\nJumlah sks = " << sks;
		cout << "\nKode MK = " << kode;
		cout << "\nNama MK = " << namaMK << endl;
	}
};

int main() {
	Mahasiswa mhs;
	Matakuliah MK;

	cout << "\n<<Masukkan Data Mahasiswa>>" << endl;
	cout << "\nMasukkan NIM = ";
	cin >> mhs.nim;
	cout << "Masukkan Nama = ";
	cin >> mhs.nama;

	cout << "\n<<Masukkan Data Mata Kuliah>>" << endl;
	MK.inputMk();

	cout << "\n<<Tampilan Data Mahasiswa>>" << endl;
	mhs.tampil();

	cout << "\n\n<<Tampilan Data Mata Kuliah>>";
	MK.tampilMK();

}