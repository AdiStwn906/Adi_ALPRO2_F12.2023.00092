#include <iostream>

using namespace std;

// Fungsi untuk mengecek ganjil atau genap
string cekGanjilGenap(int nilai) {
    return (nilai % 2 == 0) ? "Genap" : "Ganjil";
}

// Fungsi untuk mengecek apakah kelipatan 3
string cekKelipatanTiga(int nilai) {
    return (nilai % 3 == 0) ? "Kelipatan 3" : "Bukan kelipatan 3";
}

int main() {
    int nilai;
    cout << "Masukkan bilangan: ";
    cin >> nilai;

    // Menampilkan hasil ganjil atau genap
    cout << "Bilangan " << nilai << " adalah bilangan " << cekGanjilGenap(nilai) << "." << endl;

    // Menampilkan hasil kelipatan 3 atau tidak
    cout << "Bilangan " << nilai << " adalah " << cekKelipatanTiga(nilai) << "." << endl;

    // Penanganan bilangan negatif
    if (nilai < 0) {
        cout << "Catatan: Ini adalah bilangan negatif." << endl;
    }

    return 0;
}
