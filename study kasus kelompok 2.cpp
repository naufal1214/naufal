#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaPelanggan, jenisBensin;
    float totalLiter, totalHarga;

    const int HARGA_PERTALITE = 7000;
    const int HARGA_PERTAMAX = 9000;

    cout << "Masukkan nama pelanggan: ";
    getline(cin, namaPelanggan);
    
    cout<<"1.Pertalite"<<endl;
    cout<<"2.Pertamax"<<endl;
    
    cout << "Masukkan jenis bensin (pertalite/pertamax): ";
    cin >> jenisBensin;

    cout << "Masukkan total liter: ";
    cin >> totalLiter;

    if (jenisBensin == "pertalite") {
        totalHarga = totalLiter * HARGA_PERTALITE;
    } else if (jenisBensin == "pertamax") {
        totalHarga = totalLiter * HARGA_PERTAMAX;
    } else {
        cout << "Jenis bensin tidak valid!" << endl;
        return 1;
    }

    cout << "\n===== STRUK PEMBELIAN =====" << endl;
    cout << "Nama Pelanggan : " << namaPelanggan << endl;
    cout << "Jenis Bensin   : " << jenisBensin << endl;
    cout << "Total Liter    : " << totalLiter << " liter" << endl;
    cout << "Total Harga    : Rp." << totalHarga << endl;
    cout << "===========================" << endl;

    return 0;
}

