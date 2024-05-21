#include <iostream>
using namespace std;

void tambah(int* a, int* b, int* hasil) {
    *hasil = *a + *b;
}

void kurang(int* a, int* b, int* hasil) {
    *hasil = *a - *b;
}

void kali(int* a, int* b, int* hasil) {
    *hasil = *a * *b;
}

void bagi(int* a, int* b, float* hasil) {
    if (*b != 0) {
        *hasil = static_cast<float>(*a) / static_cast<float>(*b);
    } else {
        cout << "Error: Pembagian dengan nol!" << endl;
    }
}

int main() {
    int a, b, hasil_int;
    float hasil_float;
    char operasi;
    char lanjut;
    
    do {
        cout << "Masukkan bilangan pertama: ";
        cin >> a;
        cout << "Masukkan bilangan kedua: ";
        cin >> b;
        cout << "Pilih operasi (+, -, *, /): ";
        cin >> operasi;
        
        switch (operasi) {
            case '+':
                tambah(&a, &b, &hasil_int);
                cout << "Hasil: " << hasil_int << endl;
                break;
            case '-':
                kurang(&a, &b, &hasil_int);
                cout << "Hasil: " << hasil_int << endl;
                break;
            case '*':
                kali(&a, &b, &hasil_int);
                cout << "Hasil: " << hasil_int << endl;
                break;
            case '/':
                bagi(&a, &b, &hasil_float);
                if (b != 0) {
                    cout << "Hasil: " << hasil_float << endl;
                }
                break;
            default:
                cout << "Operasi tidak valid!" << endl;
        }
        
        cout << "Apakah Anda ingin melanjutkan operasi? (y/n): ";
        cin >> lanjut;
        
    } while (lanjut == 'y' || lanjut == 'Y');
    
    return 0;
}
