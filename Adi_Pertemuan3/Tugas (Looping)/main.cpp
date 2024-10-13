#include <iostream>

using namespace std;

// Fungsi untuk mencari nilai minimum
int min(int a, int b) {
    if (a < b) {
        cout << a << endl; // Cetak nilai terkecil
        return a;
    } else {
        cout << b << endl; // Cetak nilai terkecil
        return b;
    }
}

int main() {
    // Deklarasi variabel awal
    int x = 10;
    int y = 20;

    // Perulangan sebanyak 10 kali
    for (int i = 0; i < 10; i++) {
        x++;  // Increment x
        y++;  // Increment y
        // Memanggil fungsi min untuk mencari nilai terkecil antara x dan y
        min(x, y);
    }

    return 0;
}
