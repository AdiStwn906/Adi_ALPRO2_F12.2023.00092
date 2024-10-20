#include <iostream>

using namespace std;

// Fungsi untuk mencari dan mencetak bilangan genap apabila ditemukan di deretan bilangan
void caricetak(int X) {
    int arr[6] = {2, 2, 3, 3, 4, 5}; // Array deretan bilangan bulat sesuai soal.
    bool isFound = false; // Variabel pembantu untuk menandakan apakah X ditemukan atau tidak

    // Perulangan atau Looping arr untuk mencari bilangan X array deretan bilangan bulat
    for (int i = 0; i < 6; i++) {
        if (X == arr[i] && X % 2 == 0) {  // Cek apakah X ada di array dan mencari bilangan genap
            cout << "X ditemukan: " << X << endl;
            isFound = true; // Mengubah isFound false menjadi true jika X ditemukan
            break;  // Hentikan looping setelah ditemukan
        }
    }

    // Jika X tidak ditemukan di array atau bukan bilangan genap
    if (isFound == false) { // bisa juga pake (!isFound) tanda (!) adalah operator untuk membalikkan nilai boolean dari suatu ekspresi.
        cout << "X tidak ditemukan - (bukan bilangan genap)" << endl;
    }
}

int main() {
    int X;

    // Input bilangan yang ingin dicari
    cout << "Masukkan X yang dicari: ";
    cin >> X;

    // Panggil fungsi caricetak
    caricetak(X);

    return 0;
}
