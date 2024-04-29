// float nMath, nFisika, nRerata;
// int noMhs;
// string status;

// Contoh implementasi conditional statement
// Ketika kita memiliki sejumlah bilangan acak dan kita ingin membandingkan dua buah bilangan yang ada dengan syarat pemberian bilangan acak tersebut harus dibatasi rentangnya contoh rentang bilangan 0-10.
// Berikan juga generator bilangan acak untuk setiap eksekusi program dengan perintah "srand (time(0));"
// Berikan juga perintah untuk menghasilkan bilangan acak dan rentang bilangannya seperti "nBIlA = rand() % 11;"
// Kita bisa menggunakan konstruksi nested if dengan perintah pertama (if) untuk membandingkan apakah kedua bilangan tersebut sama besarnya.
// Perintah kedua kita menggunakan (else if) untuk membandingkan apakah salah satu dari kedua bilangan tersebut memiliki nilai lebih besar.
// Perintaah kedua kita menggunakan (else) untuk membandingkan apakah salah satu dari kedua bilangan tersebut memiliki nilai lebih kecil.
// Jika semua perintah sudah kita lakukan, maka kita akan dapat status bilangan tersebut bernilai "=", ">=" atau "<=".

// Contoh implementasi dari struct
// Ketika kita memiliki data mahasiswa yang ingin disimpan dalam suatu program.
// Data tersebut berisi NIM, Nama Mahasiswa, Alamat, dan Umur. Untuk data mahasiswa ini kita menggunakan tipe data struct karena kita ingin membuat struktur data mahasiswa.
// Kita bisa langsung membuat perintah cout dan cin nya untuk data input dari masing-masing variabel yang dibutuhkan.
// Terakhir, kita membuat perintah untuk membuat baris baru dengan contoh penggunaan "\n NIM :"

// Contoh implementasi dari prosedur dan fungsi
// Prosedur digunakan untuk menyelesaikan 1 tugas tertentu yang dimana kita hanya melewatkan nilai bukan mengembalikan nilai.
// Dalam programnya ditandai dengan kata kunci "void" contohnya = "void nama_prosedur"
// Fungsi akan lebih praktis digunakan daripada prosedur.
// Fungsi digunakan untuk melakukan komputasi yang akan menghasilkan nilai atau mengembalikan nilai.
// Dalam programnya diawali dengan jenis data yang dikembalikan dan diakhiri dengan kata kunci "return".

// Contoh implementasi dari looping
// Looping digunakan untuk mengulangi suatu perintah tertentu.
// Dalam looping menggunakan fungsi "Do..While"
// Berikan generator bilangan acak jika diperlukan seperti "srand (time(0));"
// Berikan juga deklarasi bilangan berada dalam rentang berapa sampai berapa


#include <iostream>
using namespace std;

int main() {
	float nMath, nEng, nRerata;
	string status;

	cout << "Masukkan nilai Matematika = ";
	cin >> nMath;
	cout << "Masukkan nilai Bahasa Inggris = ";
	cin >> nEng;

	nRerata = (nMath + nEng) / 2;
	if (nRerata >= 70) {
		status = "Lulus jalur rerata ";
	}
	else if (nMath >= 80) {
		status = "Lulus jalur Matematika ";
	}
	else {
		status = "Tidak lulus";
	}
	
	cout << "Status kelulusan = " << status << endl;
}

struct Mahasiswa {
	string Nama;
	string Status;
};

int main() {
	Mahasiswa mhs;
	cout << "Nama Mahasiswa = ";
	cin >> mhs.Nama;
	cout << "Status Mahasiswa = ";
	cin >> mhs.Status;
	cout << endl;

	cout << "\nNama : " << mhs.Nama;
	cout << "\nStatus : " << mhs.Status;

	char pilihan;
	do {
		cout << "Apakah Anda ingin mengulangi lagi? (y/n)";
		cin >> pilihan;
	} while (pilihan == 'y' || pilihan == 'Y');
}