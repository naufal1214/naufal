#include <iostream>
#include <string>

using namespace std;

struct KTP {
    char nik[20];
    string nama;
    string tempat_tgl_lahir;
    string jenis_kelamin;
    string gol_darah;
    string alamat;
    string rt_rw;
    string kel_desa;
    string kecamatan;
    string agama;
    string status_perkawinan;
    string pekerjaan;
    string kewarganegaraan;
    string berlaku_hingga;
};

void pilihKelamin(string &kelamin){
	int pilihan;
	cout << "Pilih Kelamin:\n";
	cout << "1.Laki Laki\n";
	cout << "2.Perempuan\n";
	cin >> pilihan;
	cin.ignore();
	
	switch (pilihan){
		case 1: kelamin = "Laki laki"; break;
		case 2: kelamin = "Perempuan"; break;
		default:
			cout << "Pilih kelamin valid.\n";
			kelamin = "Diketahui";
			break;
	}
}
void pilihAgama(string &agama) {
    int pilihan;
    cout << "Pilih Agama:\n";
    cout << "1. Islam\n";
    cout << "2. Kristen\n";
    cout << "3. Katolik\n";
    cout << "4. Hindu\n";
    cout << "5. Buddha\n";
    cout << "6. Konghucu\n";
    cout << "Pilihan Anda: ";
    cin >> pilihan;
    cin.ignore();

    switch (pilihan) {
        case 1: agama = "Islam"; break;
        case 2: agama = "Kristen"; break;
        case 3: agama = "Katolik"; break;
        case 4: agama = "Hindu"; break;
        case 5: agama = "Buddha"; break;
        case 6: agama = "Konghucu"; break;
        default:
            cout << "Pilihan agama tidak valid. Agama diatur ke 'Tidak Diketahui'.\n";
            agama = "Tidak Diketahui";
            break;
    }
}

void inputKTP(KTP &ktp) {
    cout << "Masukkan NIK: "; cin >> ktp.nik; cin.ignore();
    cout << "Masukkan Nama: "; getline(cin, ktp.nama);
    cout << "Masukkan Tempat/Tgl Lahir: "; getline(cin, ktp.tempat_tgl_lahir);
    cout << "Masukkan Jenis Kelamin: "; getline(cin, ktp.jenis_kelamin);
    cout << "Masukkan Golongan Darah (A/B/AB/O): "; cin >> ktp.gol_darah; cin.ignore();
    cout << "Masukkan Alamat: "; getline(cin, ktp.alamat);
    cout << "Masukkan RT/RW: "; getline(cin, ktp.rt_rw);
    cout << "Masukkan Kelurahan/Desa: "; getline(cin, ktp.kel_desa);
    cout << "Masukkan Kecamatan: "; getline(cin, ktp.kecamatan);
    pilihAgama(ktp.agama);
    cout << "Masukkan Status Perkawinan: "; getline(cin, ktp.status_perkawinan);
    cout << "Masukkan Pekerjaan: "; getline(cin, ktp.pekerjaan);
    cout << "Masukkan Kewarganegaraan: "; getline(cin, ktp.kewarganegaraan);
    cout << "Masukkan Berlaku Hingga: "; getline(cin, ktp.berlaku_hingga);
}

void displayKTP(const KTP &ktp) {
    cout << "\n=================== KTP SIMULASI ===================\n";
    cout << "NIK                 : " << ktp.nik << endl;
    cout << "NAMA                : " << ktp.nama << endl;
    cout << "Tempat/Tgl Lahir    : " << ktp.tempat_tgl_lahir << endl;
    cout << "Jenis Kelamin       : " << ktp.jenis_kelamin << "            Gol Darah: " << ktp.gol_darah << endl;
    cout << "Alamat              : " << ktp.alamat << endl;
    cout << "RT/RW               : " << ktp.rt_rw << endl;
    cout << "Kel/Desa            : " << ktp.kel_desa << endl;
    cout << "Kecamatan           : " << ktp.kecamatan << endl;
    cout << "Agama               : " << ktp.agama << endl;
    cout << "Status Perkawinan   : " << ktp.status_perkawinan << endl;
    cout << "Pekerjaan           : " << ktp.pekerjaan << endl;
    cout << "Kewarganegaraan     : " << ktp.kewarganegaraan << endl;
    cout << "Berlaku Hingga      : " << ktp.berlaku_hingga << endl;
    cout << "====================================================\n";
}

void editKTP(KTP &ktp) {
    int pilihan;
    do {
        cout << "\n=== MENU EDIT DATA KTP ===\n";
        cout << "1. Nama\n";
        cout << "2. Tempat/Tgl Lahir\n";
        cout << "3. Jenis Kelamin\n";
        cout << "4. Golongan Darah\n";
        cout << "5. Alamat\n";
        cout << "6. RT/RW\n";
        cout << "7. Kelurahan/Desa\n";
        cout << "8. Kecamatan\n";
        cout << "9. Agama\n";
        cout << "10. Status Perkawinan\n";
        cout << "11. Pekerjaan\n";
        cout << "12. Kewarganegaraan\n";
        cout << "13. Berlaku Hingga\n";
        cout << "0. Selesai Edit\n";
        cout << "Pilihan Anda: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1: cout << "Nama baru: "; getline(cin, ktp.nama); break;
            case 2: cout << "Tempat/Tgl Lahir baru: "; getline(cin, ktp.tempat_tgl_lahir); break;
            case 3: cout << "Jenis Kelamin baru: "; getline(cin, ktp.jenis_kelamin); break;
            case 4: cout << "Golongan Darah baru (A/B/AB/O): "; getline(cin, ktp.gol_darah); break;
            case 5: cout << "Alamat baru: "; getline(cin, ktp.alamat); break;
            case 6: cout << "RT/RW baru: "; getline(cin, ktp.rt_rw); break;
            case 7: cout << "Kelurahan/Desa baru: "; getline(cin, ktp.kel_desa); break;
            case 8: cout << "Kecamatan baru: "; getline(cin, ktp.kecamatan); break;
            case 9: pilihAgama(ktp.agama); break;
            case 10: cout << "Status Perkawinan baru: "; getline(cin, ktp.status_perkawinan); break;
            case 11: cout << "Pekerjaan baru: "; getline(cin, ktp.pekerjaan); break;
            case 12: cout << "Kewarganegaraan baru: "; getline(cin, ktp.kewarganegaraan); break;
            case 13: cout << "Berlaku Hingga baru: "; getline(cin, ktp.berlaku_hingga); break;
            case 0: cout << "Selesai mengedit data.\n"; break;
            default: cout << "Pilihan tidak valid.\n"; break;
        }
    } while (pilihan != 0);
}

bool mintaEdit() {
    char edit;
    cout << "\nApakah Anda ingin mengedit data? (y/n): ";
    cin >> edit;
    cin.ignore();
    return (edit == 'y' || edit == 'Y');
}

int main() {
    KTP ktp;

    cout << "Input Data KTP\n";
    inputKTP(ktp);

    displayKTP(ktp);

    if (mintaEdit()) {
        editKTP(ktp);
        displayKTP(ktp);
    } else {
        cout << "Tidak melakukan edit data.\n";
    }

    return 0;
}
