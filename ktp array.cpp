#include <iostream>
#include <string>
using namespace std;

int main() {
    const int jumlahKTP = 3;      
    const int kolom = 4;          
    string dataKTP[jumlahKTP][kolom];

    // Input data
    cout << "=== INPUT DATA KTP ===\n";
    for (int i = 0; i < jumlahKTP; i++) {
        cout << "\nData ke-" << i + 1 << endl;
        cout << "NIK       : ";
        getline(cin, dataKTP[i][0]); 
        cout << "Nama      : ";
        getline(cin, dataKTP[i][1]); 
        cout << "Alamat    : ";
        getline(cin, dataKTP[i][2]); 
        cout << "TTL       : ";
        getline(cin, dataKTP[i][3]); 
    }

    cout << "\n=== DATA KTP ===\n";
    for (int i = 0; i < jumlahKTP; i++) {
        cout << "\nData ke-" << i + 1 << endl;
        cout << "NIK       : " << dataKTP[i][0] << endl;
        cout << "Nama      : " << dataKTP[i][1] << endl;
        cout << "Alamat    : " << dataKTP[i][2] << endl;
        cout << "TTL       : " << dataKTP[i][3] << endl;
    }

    return 0;
}

