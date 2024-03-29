#include <iostream>
using namespace std;

int main() {
    int op;
    float num1, num2;
    
    cout << "Masukkan bilangan ke-1 : ";
    cin >> num1;
    cout << "Masukkan bilangan ke-2 : ";
    cin >> num2;

    int hasilTambah = num1 + num2;
    int hasilKurang = num1 - num2;
    int hasilKali = num1 * num2;
    float hasilBagi = num1 / num2; 

    cout << "\n1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "\nPilih Operator : ";
    cin >> op;
    
    switch(op) {
        case 1:
            cout << "\nHasil penjumlahan dari " << num1 << " + " << num2 << " = " << hasilTambah;
            break;

        case 2:
            cout << "\nHasil pengurangan dari " << num1 << " - " << num2 << " = " << hasilKurang;
            break;

        case 3:
            cout << "\nHasil perkalian dari " << num1 << " x " << num2 << " = " << hasilKali;
            break;

        case 4:
            if (num2 != 0)
                cout << "\nHasil pembagian dari " << num1 << " : " << num2 << " = " << hasilBagi;
            else
                cout << "\nError: Tidak bisa membagi dengan nol!";
            break;

        default:
            cout << "\nOperator tidak valid!";
            break;
    }

    return 0;
}
