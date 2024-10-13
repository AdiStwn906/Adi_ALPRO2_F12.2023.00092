#include <iostream>

using namespace std;

int main()
{
    //Deklrasi Variabel
    string nama;
    string NIM;
    int usia;

    // Input dari User atau Pengguna
    cout << "Masukan Nama anda: ";
    cin >> nama;

    cout << "Masukan NIM anda: ";
    cin >> NIM;

    cout << "Masukan Usia anda: ";
    cin >> usia;

    //Output
    cout << "---Output---" << endl;
    cout << "Nama: "<< nama << endl;
    cout << "NIM: " << NIM << endl;
    cout << "Usia: " << usia << endl;

    //Munculkan nama sebanyak usia. FOR (inisiasi)
    cout << "---Mulai perulangan---" << endl;
    int i = 0;
    do {
        cout << nama << endl;
        i++;
    }
    while (i< usia);

    //Pake while
    //cout << "---Mulai perulangan menggunakan While---" << endl;
    //int i = 0;
    //while (i < usia) {
        //cout << nama << endl;
        //i++;
    //}
}
