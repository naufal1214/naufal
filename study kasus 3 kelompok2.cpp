#include <iostream>
#include <string>
using namespace std;

struct KTP {
    string nik;
    string nama;
    string provinsi;
    string kabupatenKota;
    string alamat;
    string rtRw;
    string kelDesa;
    string kecamatan;
    string tempatLahir;
    string tanggalLahir;
    string jenisKelamin;
    string golonganDarah;
    string agama;
    string statusPerkawinan;
    string pekerjaan;
    string kewarganegaraan;
    string berlakuHingga;
};

int main() {
    int jumlah;
    char ulangi;
    
    do {
        KTP data;
        
        cout << "\n=================== INPUT DATA KTP =======================\n";
        
        cout << "NIK                    : ";
        getline(cin, data.nik);
       
        cout << "Nama                   : ";
        getline(cin, data.nama);
        
         cout << "Provinsi               : ";
        getline(cin, data.provinsi);

        cout << "Kabupaten/Kota         : ";
        getline(cin, data.kabupatenKota);


        cout << "Tempat Lahir           : ";
        getline(cin, data.tempatLahir);

        cout << "Tanggal Lahir (dd-mm-yyyy): ";
        getline(cin, data.tanggalLahir);

        cout << "Jenis Kelamin (L/P)    : ";
        getline(cin, data.jenisKelamin);

        cout << "Gol. Darah (A/B/AB/O)  : ";
        getline(cin, data.golonganDarah);

        cout << "Alamat                 : ";
        getline(cin, data.alamat);

        cout << "RT/RW                  : ";
        getline(cin, data.rtRw);

        cout << "Kel/Desa               : ";
        getline(cin, data.kelDesa);

        cout << "Kecamatan              : ";
        getline(cin, data.kecamatan);

        cout << "Agama                  : ";
        getline(cin, data.agama);

        cout << "Status Perkawinan      : ";
        getline(cin, data.statusPerkawinan);

        cout << "Pekerjaan              : ";
        getline(cin, data.pekerjaan);

        cout << "Kewarganegaraan        : ";
        getline(cin, data.kewarganegaraan);

        cout << "Berlaku Hingga         : ";
        getline(cin, data.berlakuHingga);

        cout << "\n=== DATA KTP ===\n";
        cout << "PROVINSI               : " << data.provinsi << endl;
        cout << "KABUPATEN/KOTA         : " << data.kabupatenKota << endl;
        cout << "NIK                    : " << data.nik << endl;
        cout << "Nama                   : " << data.nama << endl;
        cout << "Tempat/Tgl Lahir       : " << data.tempatLahir << ", " << data.tanggalLahir << endl;
        cout << "Jenis Kelamin          : " << data.jenisKelamin;
        cout << "        Gol. Darah     : " << data.golonganDarah << endl;
        cout << "Alamat                 : " << data.alamat << endl;
        cout << "     RT/RW             : " << data.rtRw << endl;
        cout << "     Kel/Desa          : " << data.kelDesa << endl;
        cout << "     Kecamatan         : " << data.kecamatan << endl;
        cout << "Agama                  : " << data.agama << endl;
        cout << "Status Perkawinan      : " << data.statusPerkawinan << endl;
        cout << "Pekerjaan              : " << data.pekerjaan << endl;
        cout << "Kewarganegaraan        : " << data.kewarganegaraan << endl;
        cout << "Berlaku Hingga         : " << data.berlakuHingga << endl;

        cout << "\nInput data lagi? (y/n): ";
        cin >> ulangi;
        cin.ignore(); 
        
    } while (ulangi == 'y' || ulangi == 'Y');

    cout << "\nTerima kasih telah menggunakan program ini!\n";
    return 0;
}
