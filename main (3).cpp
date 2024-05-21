#include <iostream>
using namespace std;

int main() {
    int bilangan[10];
    int index = 0;
    for (int i = 1; i <= 20; i += 2) {
        bilangan[index] = i;
        index++;
    }
    for (int i = 0; i < 10; i++) {
        int* ptr = &bilangan[i];
        cout << "Bilangan ganjil: " << bilangan[i] << ", Alamat memori: " << ptr << endl;
    }
    
    return 0;
}