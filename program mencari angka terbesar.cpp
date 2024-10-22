#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;

    cout << "Masukkan tiga angka: " << endl;
    cout << "Angka 1: ";
    cin >> num1;
    cout << "Angka 2: ";
    cin >> num2;
    cout << "Angka 3: ";
    cin >> num3;

    int max = num1;

    if (num2 > max){
        max = num2;
    }
    if (num3 > max){
        max = num3;
    }

    cout << "Angka terbesar adalah: " << max << endl;

    return 0;
}