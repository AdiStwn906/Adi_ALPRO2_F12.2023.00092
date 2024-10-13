#include <iostream>

using namespace std;

//tipe data fungsi, nama fungsi (parameters)
int max(int a, int b){
    if(a > b){
        cout << a << endl; //output biga di ganti
        return a;
    } else {
        cout << b << endl;
        return b;
    }
}

int main()
{
    /*int x; //Deklarasi
    cout << "Masukan jumlah pengulangan: ";
    cin >> x; //Simpan nilai input

    for (int i = 0; i < x; i++){ //Lakukan perulangan sebanyak nilai yang di simpan di var dsb
        cout << "Hello World" << endl; //Cetak teks di dala perulangan tsb
    }

    /*int y;
    y = 5;

    if (x > y){
        cout << "X lebih dari Y" << endl;
    }else if (x < y){
        cout << "X kurang dari Y" << endl;
    }else{ //Bisa juga -----  else if (x == y) -----
        cout << "X sama dengan Y" << endl;
    };

     if (x > y){
        cout << x <<" lebih dari " << y<< endl;
    }else if (x < y){
        cout << x <<" kurang dari " << y << endl;
    }else{
        cout << x << " sama dengan " << y << endl;
    };/*/


    int x=5;
    int y=20;

    for(int i = 0; i < 10; i++){
        x++;
        y++;
        max(x,y);
    }

    return 0;
}

