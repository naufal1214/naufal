#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    int nim;
    string nama;
};

void inputData(Mahasiswa mhs[], int &jumlah) {
    cout << "Masukkan jumlah mahasiswa (minimal 5): ";
    cin >> jumlah;

    if (jumlah < 5) {
        cout << "Jumlah mahasiswa harus minimal 5!" << endl;
        return;
    }

    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan NIM mahasiswa ke-" << i + 1 << ": ";
        cin >> mhs[i].nim;
        cin.ignore();  
        cout << "Masukkan Nama mahasiswa ke-" << i + 1 << ": ";
        getline(cin, mhs[i].nama);
    }
}

void sortData(Mahasiswa mhs[], int jumlah) {
    for (int i = 0; i < jumlah - 1; i++) {
        for (int j = i + 1; j < jumlah; j++) {
            if (mhs[i].nim > mhs[j].nim) {
                swap(mhs[i], mhs[j]);
            }
        }
    }
}

void cariData(Mahasiswa mhs[], int jumlah, int cariNIM) {
    for (int i = 0; i < jumlah; i++) {
        if (mhs[i].nim == cariNIM) {
            cout << "Data ditemukan!" << endl;
            cout << "NIM  : " << mhs[i].nim << endl;
            cout << "Nama : " << mhs[i].nama << endl;
            return;
        }
    }
    cout << "Data dengan NIM " << cariNIM << " tidak ditemukan." << endl;
}

int main() {
    Mahasiswa mhs[100]; 
    int jumlah;
    int cariNIM;

    inputData(mhs, jumlah);
    
    if (jumlah < 5) return 0; 

    sortData(mhs, jumlah);

    cout << "\nData setelah diurutkan berdasarkan NIM:" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << mhs[i].nim << " - " << mhs[i].nama << endl;
    }

    cout << "\nMasukkan NIM yang ingin dicari: ";
    cin >> cariNIM;
    cariData(mhs, jumlah, cariNIM);

    return 0;
}
