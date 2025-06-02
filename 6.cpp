#include <iostream>
#include <string>
using namespace std;

struct Motor {
    int telp, lama, harga;
    double total;
    string pinjam, nama, nik, alamat;
    string mtr[25] = {
        "Beat", "Vario", "Scoopy", "Aerox", "Nmax",
        "Xmax", "PCX", "Astrea", "Bison", "Vixion",
        "Megapro", "Ninja", "Supra", "XRider", "CRF",
        "Filano", "Revo", "Lexi", "CB 150R", "RX King",
        "Mio", "Beat Street", "Vespa Klasik", "Vespa Matic", "Jupiter"
    };
} pinjam;

class Data {
public:
    void inputOrang();
    void inputMotor();
    void output();
};

void Data::inputOrang() {
    cout << "=========================================\n";
    cout << "||                                     ||\n";
    cout << "||            RENTAL MOTOR             ||\n";
    cout << "||                                     ||\n";
    cout << "=========================================\n";
    cout << "- - Silahkan mengisi data diri anda di bawah! - -\n";

    cin.ignore(); // Membersihkan buffer
    cout << "Nama             : ";
    getline(cin, pinjam.nama);
    cout << "NIK              : ";
    getline(cin, pinjam.nik);
    cout << "Alamat           : ";
    getline(cin, pinjam.alamat);
    cout << "No. Telepon/WA   : ";
    cin >> pinjam.telp;
}

void Data::inputMotor() {
    cout << "\n=== Daftar Motor yang Tersedia ===\n";
    for (int i = 0; i < 25; i++) {
        cout << i + 1 << ". " << pinjam.mtr[i] << endl;
    }

    int pilihan;
    cout << "\nPilih nomor motor yang ingin disewa (1-25): ";
    cin >> pilihan;

    if (pilihan < 1 || pilihan > 25) {
        cout << "Pilihan tidak valid.\n";
        return;
    }

    pinjam.pinjam = pinjam.mtr[pilihan - 1];

    cout << "Lama sewa (dalam hari): ";
    cin >> pinjam.lama;

    cout << "Harga sewa per hari (Rp): ";
    cin >> pinjam.harga;

    pinjam.total = pinjam.lama * pinjam.harga;
}

void Data::output() {
    cout << "\n=========================================\n";
    cout << "          STRUK PENYEWAAN MOTOR\n";
    cout << "=========================================\n";
    cout << "Nama           : " << pinjam.nama << endl;
    cout << "NIK            : " << pinjam.nik << endl;
    cout << "Alamat         : " << pinjam.alamat << endl;
    cout << "No. Telepon    : " << pinjam.telp << endl;
    cout << "Motor Disewa   : " << pinjam.pinjam << endl;
    cout << "Lama Sewa      : " << pinjam.lama << " hari" << endl;
    cout << "Harga/Hari     : Rp " << pinjam.harga << endl;
    cout << "Total Bayar    : Rp " << pinjam.total << endl;
    cout << "=========================================\n";
}

int main() {
    Data d;
    d.inputOrang();
    d.inputMotor();
    d.output();
    return 0;
}

