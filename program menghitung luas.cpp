#include <iostream>
using namespace std;

int main(){
    int pilihan;
    float luas;

    cout << "Pilih bentuk untuk menghitung luas: " << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "Masukkan pilihan (1-3): ";
    cin >> pilihan;

    switch (pilihan){
        case 1:{
            float sisi;
            cout << "Masukkan panjang sisi persegi: ";
            cin >> sisi;
            luas = sisi * sisi;
            cout << "Luas persegi: " << luas << endl;
            break;
        }
        case 2:{
            float panjang, lebar;
            cout << "Masukkan panjang persegi panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar persegi panjang: ";
            cin >> lebar;
            luas = panjang * lebar;
            cout << "Luas persegi panjang: " << luas << endl;
            break;
        }
        case 3:{
            float alas, tinggi;
            cout << "Masukkan panjang alas segitiga: ";
            cin >> alas;
            cout << "Masukkan tinggi segitiga: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            cout << "Luas segitiga: " << luas << endl;
            break;
        }
        default:
            cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}