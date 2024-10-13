#include <iostream>

using namespace std;

// Fungsi untuk mencari nilai minimum dari dua bilangan bulat
int min(int a, int b) {
    if (a < b) {
        return a;  // Jika a lebih kecil dari b, kembalikan a
    } else {
        return b;  // Jika b lebih kecil atau sama dengan a, kembalikan b
    }
}

int main() {
    // Deklarasi dua variabel x dan y
    int x, y;

    // Input nilai x dan y dari pengguna
    cout << "Masukkan nilai x: ";
    cin >> x;

    cout << "Masukkan nilai y: ";
    cin >> y;

    // Panggil fungsi min untuk mencari nilai terkecil antara x dan y
    int nilaiTerkecil = min(x, y);

    // Cetak nilai terkecil
    cout << "Jadi nilai terkecil antara X dan Y adalah: " << nilaiTerkecil << endl;

    return 0;
}
