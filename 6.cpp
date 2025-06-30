#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
#include <iomanip>
#include <cstring> 
using namespace std;


const int MAX_MOTOR = 125;
const int MAX_SEWA = 10;
const int MAX_LAPORAN = 100;
const int MAX_BOOKING = 100;


string mtr[MAX_MOTOR] = { 
    "beat", "vario", 
	"scoopy", "aerox", 
	"nmax", "xmax", 
	"pcx", "astrea", 
	"bison", "vixion",
    "megapro", "ninja", 
	"supra", "xrider", 
	"crf", "filano", 
	"revo", "lexi", 
	"cb150r", "rxKing",
    "mio", "beatStreat", 
	"vespaClasik", "vespaMatic", 
	"jupiter",
    "genio", "klx150", 
	"satria", "shogun", 
	"gsx150", "aeroxConnected", 
	"grande", "gear125", 
	"smash", "z125",
    "z250", "ducati", 
	"r15", "r25", 
	"xabre", "cb500x", 
	"cbr150r", "cbr250rr", 
	"r125", "mt15",
    "mt25", "adv160", 
	"adv150", "forza250", 
	"xmaxConnected", "vario160", 
	"spacy", "scoopyPrestige", 
	"mioZ", "mioSoul",
    "nexII", "hayate", 
	"skywave", "skygo", 
	"tricity", "vino", 
	"xsr155", "klx230", 
	"klx250", "wr155",
    "wr250", "gsx250r", 
	"gsxR750", "rc390", 
	"duke250", "duke200", 
	"cb650r", "mt09", 
	"mt07", "z900",
    "z800", "versys650", 
	"versys1000", "ninjaZX6R", 
	"ninjaZX10R", "ninjaH2", 
	"panigaleV4", "r1", 
	"r1m", "s1000rr",
    "s1000xr", "r1250gs", 
	"tmax", "apriliaRS", 
	"caponord", "gts300", 
	"sprint150", "primavera150", 
	"crf250", "xr150",
    "ct125", "monkey125", 
	"grom", "gpx", 
	"binter", "rxs", 
	"rxz", "ninjaRR", 
	"glmax", "tiger",
    "thunder", "sh150i", 
	"pcx160", "genioStreet", 
	"gsxS150", "gsxR150", 
	"glpro", "gl100", 
	"megaproPrimus", "cb150x",
    "sonic150", "cs1", 
	"astraGrand", "astraPrima", 
	"grandAstrea", "c700", 
	"c800", "fazzio", 
	"freego", "vinoora"

 };
 
string jenis[MAX_MOTOR] = { 
    "Matic", "Matic", 
	"Matic", "Matic", 
	"Matic", "Matic", 
	"Matic", "Bebek", 
	"Sport", "Sport",
    "Sport", "Sport", 
	"Bebek", "Sport", 
	"Trail", "Matic", 
	"Bebek", "Matic", 
	"Sport", "Sport",
    "Matic", "Matic", 
	"Klasik", "Matic", 
	"Bebek",
    "Matic", "Trail", 
	"Bebek", "Bebek", 
	"Sport", "Matic", 
	"Matic", "Matic", 
	"Bebek", "Mini",
    "Sport", "Sport", 
	"Sport", "Sport", 
	"Sport", "Sport", 
	"Sport", "Sport", 
	"Sport", "Sport",
    "Sport", "Matic", 
	"Matic", "Matic", 
	"Matic", "Matic", 
	"Matic", "Matic", 
	"Matic", "Matic",
    "Matic", "Matic", 
	"Matic", "Matic", 
	"Matic", "Matic", 
	"Sport", "Trail", 
	"Trail", "Trail",
    "Trail", "Sport", 
	"Sport", "Sport", 
	"Sport", "Sport", 
	"Sport", "Sport", 
	"Sport", "Sport",
    "Sport", "Sport", 
	"Sport", "Sport", 
	"Sport", "Sport", 
	"Sport", "Sport", 
	"Sport", "Sport",
    "Sport", "Sport", 
	"Matic", "Sport", 
	"Sport", "Matic", 
	"Matic", "Matic", 
	"Trail", "Trail",
    "Trail", "Mini", 
	"Mini", "Mini", 
	"Sport", "Sport", 
	"Sport", "Sport", 
	"Sport", "Sport",
    "Sport", "Matic", 
	"Matic", "Matic", 
	"Sport", "Sport", 
	"Sport", "Sport", 
	"Sport", "Sport",
    "Sport", "Sport", 
	"Bebek", "Bebek", 
	"Bebek", "Bebek", 
	"Bebek", "Matic", 
	"Matic", "Matic"
};


string cc[MAX_MOTOR] = {     "110cc", "125cc", 
	"110cc", "155cc", 
	"155cc", "250cc", 
	"160cc", 
	"100cc", 
	"150cc", "150cc",
    "160cc", "250cc", 
	"125cc", "150cc", 
	"150cc", "125cc", 
	"110cc", "125cc", 
	"150cc", 
	"135cc",
    "110cc", "110cc", 
	"150cc", "150cc", 
	"110cc",
    "110cc", "150cc", 
	"110cc", "125cc", 
	"150cc", "125cc", 
	"110cc", "160cc", 
	"125cc", "50cc",
    "150cc", "200cc", 
	"155cc", "180cc", 
	"250cc", "300cc", 
	"600cc", 
	"1000cc", 
	"150cc", "175cc",
    "200cc", "110cc", 
	"125cc", "160cc", 
	"125cc", "110cc", 
	"125cc", "150cc", 
	"125cc", 
	"160cc",
    "125cc", "125cc", 
	"150cc", "155cc", 
	"110cc", "110cc", 
	"250cc", "150cc", 
	"150cc", "250cc",
    "450cc", "155cc", 
	"180cc", "200cc", 
	"250cc", "300cc", 
	"350cc", "400cc", 
	"500cc", 
	"550cc",
    "600cc", "650cc", 
	"700cc", "750cc", 
	"800cc", "850cc", 
	"900cc", "1000cc", 
	"1100cc", "1200cc",
    "1250cc", "1300cc", 
	"150cc", "135cc", 
	"180cc", "125cc", 
	"160cc", "110cc", 
	"150cc", "150cc",
    "250cc", "50cc", 
	"70cc", "90cc", 
	"180cc", "200cc", 
	"250cc", 
	"300cc", 
	"350cc", "400cc",
    "500cc", "125cc", 
	"125cc", "125cc", 
	"600cc", "700cc", 
	"750cc", 
	"800cc", 
	"850cc", "900cc",
    "1000cc", "1100cc", 
	"110cc", "125cc", 
	"135cc", "140cc", 
	"150cc", "155cc", 
	"160cc", "125cc"
};

int stok[MAX_MOTOR] = { 
    3, 2, 
	4, 0, 
	1, 2, 
	3, 0, 
	1, 2,
    1, 0, 
	2, 1, 
	3, 1, 
	1, 2, 
	2, 0,
    1, 1, 
	0, 2, 
	1, 2, 
	1, 3, 
	2, 1,
    2, 4, 
	3, 1, 
	5, 1, 
	1, 2, 
	3, 1,
    1, 2, 
	2, 1, 
	1, 0, 
	3, 2, 
	4, 2,
    2, 3, 
	2, 3, 
	2, 1, 
	2, 1, 
	2, 4,
    2, 1, 
	1, 2, 
	1, 1, 
	1, 2, 
	2, 2,
    1, 1, 
	1, 1, 
	1, 1, 
	1, 1, 
	1, 1,
    1, 1, 
	3, 2, 
	2, 3, 
	3, 3, 
	2, 1,
    2, 3, 
	4, 3, 
	2, 1, 
	1, 1, 
	2, 2,
    2, 3, 
	3, 1, 
	1, 1, 
	1, 1, 
	1, 1,
    1, 1, 
	3, 2, 
	2, 1, 
	1, 1, 
	2, 2
};

int harga_sewa[MAX_MOTOR] = {     50000, 55000, 
	52000, 70000, 
	75000, 90000, 
	85000, 
	40000, 
	45000, 48000,
    47000, 95000, 
	43000, 46000, 
	60000, 52000, 
	41000, 50000, 
	62000, 70000,
    45000, 48000, 
	100000, 110000, 
	43000, 44000, 
	65000, 46000, 
	50000, 
	55000,
    52000, 47000, 
	60000, 51000, 
	35000, 66000, 
	75000, 70000, 
	72000, 95000,
    100000, 120000, 
	140000, 65000, 
	67000, 80000, 
	45000, 50000, 
	58000, 52000,
    46000, 48000, 
	62000, 50000, 
	57000, 54000, 
	53000, 60000, 
	70000, 43000,
    44000, 92000, 
	68000, 
	69000, 
	91000, 100000, 
	71000, 75000, 
	77000, 85000,
    88000, 93000, 
	95000, 105000, 
	108000, 110000, 
	115000, 120000, 
	125000, 130000,
    135000, 140000, 
	145000, 150000, 
	160000, 165000, 
	170000, 62000, 
	58000, 75000,
    50000, 60000, 
	46000, 63000, 
	64000, 85000, 
	30000, 35000, 
	37000, 78000,
    82000, 89000, 
	95000, 98000, 
	102000, 110000, 
	52000, 53000, 
	54000, 130000,
    140000, 145000, 
	148000, 
	150000, 
	155000, 160000, 
	165000, 47000, 
	49000, 50000,
    52000, 55000, 
	58000, 60000, 
	51000
};

string plat_nomor[MAX_MOTOR] = { 
    "H 5590 UY", 
	"D 4197 AV", 
	"AB 5863 CK", "K 4871 KI", 
	"AB 6847 HX", "K 2287 UG", 
	"K 7095 DS", 
	"K 9394 UO", 
	"H 4862 TE", "F 1233 PA",
    "AB 4926 CI", "B 3978 VF", 
	"H 4300 UG", 
	"E 7621 LT", 
	"H 1771 QB", "N 8142 TZ", 
	"E 9426 OX", "B 6724 RD", 
	"K 7876 HI", 
	"AD 7090 RP",
    "E 6803 HE", "L 8986 NG", 
	"D 2217 NR", "B 7050 TP", 
	"N 2427 UW", 
	"F 8168 LE", 
	"L 2838 WS", "B 5128 TZ", 
	"N 7247 LK", "E 9428 YU",
    "D 9997 VF", 
	"AB 1987 YE", 
	"AB 3009 FQ", "E 6212 RT", 
	"B 7545 KB", "AD 1327 SZ", 
	"K 1239 KY", 
	"H 8013 UK", 
	"H 3121 EC", "F 2720 DY",
    "N 3127 QT", 
	"H 4400 YQ", 
	"H 9478 II", "B 4249 ZV", 
	"E 3089 QE", "D 7363 EV", 
	"F 3634 NT", 
	"F 2226 NN", 
	"F 1671 EB", "F 1521 UR",
    "L 7209 JE", "N 1683 IB", 
	"L 7997 TR", 
	"B 1789 LK", 
	"N 2269 NJ", "AD 6841 QW", 
	"B 6552 VI", "B 4789 OM", 
	"L 4528 NQ", 
	"H 2432 EO",
    "B 4643 ZD", "E 3541 PF", 
	"H 5268 TV", "L 7834 DC", 
	"E 2061 RN", 
	"AB 3758 TR", 
	"B 5406 HZ", "E 9587 JQ", 
	"D 8711 HW", "K 2812 RV",
    "B 3729 ZD", 
	"AD 8575 DL", 
	"AB 1595 BS", "AB 3839 NZ", 
	"L 1936 JL", "H 9815 OJ", 
	"AD 9393 FS", 
	"N 2685 TS", 
	"N 8093 AS", "K 5372 HV",
    "K 5358 MM", "L 5833 RY", 
	"H 1127 PT", 
	"AB 3516 RE", 
	"B 4721 WJ", "L 1280 IK", 
	"AB 7985 MO", "AD 9687 FW", 
	"F 9504 NA", 
	"AB 7992 LE",
    "N 4867 AP", "F 7194 BU", 
	"L 4492 QU", "N 6290 BR", 
	"F 6960 AU", 
	"N 7664 BQ", 
	"H 3133 PS", "F 9296 UW", 
	"B 7180 DF", "AD 4474 KJ",
    "AB 2198 PJ", 
	"AD 9590 VD", 
	"B 2422 UF", "AB 6798 CV", 
	"L 8687 BI", "L 6321 ZZ", 
	"E 6046 YB", 
	"L 3523 HC", 
	"L 5642 KG", "N 5200 ES",
    "E 9383 HY", "H 6494 HF", 
	"N 3200 WR", 
	"E 8413 JH", 
	"B 1375 QD", "F 1521 LY", 
	"AB 7353 WQ", "F 8543 SG", 
	"AD 6286 JB", 
	"F 8765 GF",
    "D 7324 NX", "AD 6716 YQ", 
	"D 1162 QJ", "K 2443 FS", 
	"L 7310 KX"
};

struct MotorDisewa {
    int index;
    int lama;
    double hargaAwal;
    double diskonDurasi;
    double diskonJumlah;
    double hargaAkhir;
};

struct Penyewa {
    string nama, nik, alamat;
    int telp;
    MotorDisewa daftarSewa[MAX_SEWA];
    int jumlahSewa;
    string hari, tanggal, jam;
    string metodePembayaran;
};

struct Laporan {
    string tanggal;
    string nama;
    double totalPembayaran;
};

struct Booking {
    string nama;
    string tanggal;
    int indexMotor;
};

class Rental {
	
private:
    Penyewa penyewa;
    Laporan daftarLaporan[MAX_LAPORAN];
    int jumlahLaporan;
    Booking daftarBooking[MAX_BOOKING];
    int jumlahBooking;


public:
    Rental() : jumlahLaporan(0), jumlahBooking(0) {}

    void inputDataDiri();
    void inputSewaMotor();
    void cetakStruk();
    void laporanPendapatan();
    void batalkanSewa();
    void ubahSewa();
    void jumlahSewa();
    void buatBooking();
    void tampilkanBooking();
    void batalkanBooking();
    void bubbleSortMotorByNama(); 

};

void bubbleSortMotorByNama() {
    for (int i = 0; i < MAX_MOTOR - 1; i++) {
        for (int j = 0; j < MAX_MOTOR - i - 1; j++) {
            if (mtr[j] > mtr[j + 1]) {
                swap(mtr[j], mtr[j + 1]);
                swap(jenis[j], jenis[j + 1]);
                swap(cc[j], cc[j + 1]);
                swap(stok[j], stok[j + 1]);
                swap(harga_sewa[j], harga_sewa[j + 1]);
                swap(plat_nomor[j], plat_nomor[j + 1]);
            }
        }
    }
}

void menuAdmin() {
	
	bubbleSortMotorByNama();
        cout << "\n=== MENU ADMIN ===\n";
    cout << left << setw(5) << "No" << setw(15) << "Nama Motor" << setw(10) << "Jenis" << setw(10) << "CC" << setw(8) << "Stok" << "Plat\n";
    cout << "------------------------------------------------\n";
    for (int i = 0; i < MAX_MOTOR; ++i) {
        cout << setw(5) << i + 1 << setw(15) << mtr[i] << setw(10) << jenis[i] << setw(10) << cc[i] << setw(8) << stok[i] << plat_nomor[i] << endl;
    }
}


void Rental::inputDataDiri() {
    cout << "=========================================\n";
    cout << "||            RENTAL MOTOR             ||\n";
    cout << "=========================================\n";
    cout << "- - Silahkan mengisi data diri anda - -\n";
    
    cin.ignore();
    
    cout << "Nama             : ";
    getline(cin, penyewa.nama);
    
    cout << "Nik              : ";
    getline(cin, penyewa.nik);
    
    cout << "Alamat           : ";
    getline(cin, penyewa.alamat);
    
    cout << "No. Telepon/WA   : ";
    cin >> penyewa.telp;
    
    int metode;
    string metodeList[] = {"Cash", "Transfer", "QRIS", "e-Wallet"};

    cout << "Pilih Metode Pembayaran:\n";
    cout << "1. Cash\n2. Transfer\n3. QRIS\n4. e-Wallet\n";
    cout << "Pilihan (1-4): ";
    cin >> metode;

    while (metode < 1 || metode > 4) {
        cout << "Pilihan tidak valid. Masukkan angka 1 - 4: ";
        cin >> metode;
    }

    penyewa.metodePembayaran = metodeList[metode - 1];
}

void Rental::inputSewaMotor() {
    int jumlah;
    cout << "\nBerapa motor yang ingin anda sewa? ";
    cin >> jumlah;
    penyewa.jumlahSewa = 0;

    if (jumlah > MAX_SEWA) {
        cout << "Maaf, maksimal " << MAX_SEWA << " motor yang dapat disewa sekaligus.\n";
        return;
    }

    for (int i = 0; i < jumlah; ++i) {
        cout << "\nPilihan motor ke-" << i+1 << ":\n";
        for (int j = 0; j < MAX_MOTOR; ++j)
            cout << j+1 << ". " << mtr[j] << " (" << jenis[j] << ", " << cc[j] << ", Stok: " << stok[j] << ")\n";

        int pilih;
        cout << "Pilih nomor motor (1-" << MAX_MOTOR << "): ";
        cin >> pilih;
        pilih--;

        if (pilih < 0 || pilih >= MAX_MOTOR || stok[pilih] <= 0) {
            cout << "Pilihan tidak valid atau stok habis.\n";
            i--; continue;
        }

        MotorDisewa sewa;
        sewa.index = pilih;
        cout << "Lama peminjaman (hari): ";
        cin >> sewa.lama;
        sewa.hargaAwal = harga_sewa[pilih];

        sewa.diskonDurasi = (sewa.lama > 7) ? 0.1 * sewa.hargaAwal : 0;
        sewa.diskonJumlah = (jumlah > 2) ? 0.1 * sewa.hargaAwal : 0;
        sewa.hargaAkhir = sewa.hargaAwal - sewa.diskonDurasi - sewa.diskonJumlah;

        penyewa.daftarSewa[penyewa.jumlahSewa++] = sewa;
        stok[pilih]--;
    }

    time_t now = time(0);
    tm *ltm = localtime(&now);
    string hariList[7] = {"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"};
    penyewa.hari = hariList[ltm->tm_wday];

    stringstream tgl, jm;
    tgl << setfill('0') << setw(2) << ltm->tm_mday << "-"
        << setw(2) << (ltm->tm_mon + 1) << "-"
        << (1900 + ltm->tm_year);
    jm << setfill('0') << setw(2) << ltm->tm_hour << ":" << setw(2) << ltm->tm_min;

    penyewa.tanggal = tgl.str();
    penyewa.jam = jm.str();
}

void cariMotorBerdasarkanNama() {
    string kataKunci;
    cout << "\nMasukkan kata kunci nama motor: ";
    cin.ignore();
    getline(cin, kataKunci);

    bool ditemukan = false;
    cout << "\n=== HASIL PENCARIAN ===\n";
    for (int i = 0; i < MAX_MOTOR; ++i) {
        if (strstr(mtr[i].c_str(), kataKunci.c_str()) != NULL) {
            cout << i + 1 << ". " << mtr[i]
                 << " (" << jenis[i]
                 << ", " << cc[i]
                 << ", Stok: " << stok[i]
                 << ", Plat: " << plat_nomor[i] << ")\n";
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ditemukan motor dengan kata kunci tersebut.\n";
    }
}

void cariMotorBerdasarkanJenis() {
    string kataKunci;
    cout << "\nMasukkan kata kunci jenis motor (misal: Matic/Sport/Bebek/Trail): ";
    cin.ignore();
    getline(cin, kataKunci);

    bool ditemukan = false;
    cout << "\n=== HASIL PENCARIAN BERDASARKAN JENIS ===\n";
    for (int i = 0; i < MAX_MOTOR; ++i) {
        if (strstr(jenis[i].c_str(), kataKunci.c_str()) != NULL) {
            cout << i + 1 << ". " << mtr[i]
                 << " (" << jenis[i]
                 << ", " << cc[i]
                 << ", Stok: " << stok[i]
                 << ", Plat: " << plat_nomor[i] << ")\n";
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ditemukan motor dengan jenis tersebut.\n";
    }
}




void Rental::cetakStruk() {
    if (penyewa.jumlahSewa == 0) {
        cout << "Tidak ada motor yang disewa.\n";
        return;
    }

    cout << "\n================ STRUK PENYEWAAN ================\n";
    cout << "Nama Penyewa     : " << penyewa.nama << endl;
    cout << "NIK              : " << penyewa.nik << endl;
    cout << "Alamat           : " << penyewa.alamat << endl;
    cout << "No Telepon/WA    : " << penyewa.telp << endl;
    cout << "Metode Pembayaran: " << penyewa.metodePembayaran << endl;
    cout << "Tanggal Sewa     : " << penyewa.tanggal << " (" << penyewa.hari << ") " << penyewa.jam << endl;

    double totalBayar = 0, totalDiskon = 0;

    cout << "\nDaftar Motor yang Disewa:\n";
    for (int i = 0; i < penyewa.jumlahSewa; ++i) {
        MotorDisewa m = penyewa.daftarSewa[i];
        double subtotal = m.hargaAkhir * m.lama;
        double diskonTotal = (m.diskonDurasi + m.diskonJumlah) * m.lama;

        cout << i+1 << ". " << mtr[m.index] << " (" << jenis[m.index] << ", " << cc[m.index] << ", Plat: " << plat_nomor[m.index] << ")" << endl;
        cout << "   Harga/hari       : Rp" << m.hargaAwal << endl;
        if (m.diskonDurasi > 0)
            cout << "   Diskon Durasi    : 10% (-Rp" << m.diskonDurasi << ")\n";
        if (m.diskonJumlah > 0)
            cout << "   Diskon Jumlah    : 10% (-Rp" << m.diskonJumlah << ")\n";
        cout << "   Harga Akhir/hari : Rp" << m.hargaAkhir << endl;
        cout << "   Total            : Rp" << subtotal << "\n";

        totalDiskon += diskonTotal;
        totalBayar += subtotal;
    }

    cout << "\n--------------------------------------------------\n";
    cout << fixed << setprecision(0);
    cout << "Total Diskon     : -Rp" << totalDiskon << endl;
    cout << "Total Bayar      : Rp" << totalBayar << endl;
    cout << "==================================================\n";
    
    if (jumlahLaporan < MAX_LAPORAN) {
        daftarLaporan[jumlahLaporan].tanggal = penyewa.tanggal;
        daftarLaporan[jumlahLaporan].nama = penyewa.nama;
        daftarLaporan[jumlahLaporan].totalPembayaran = totalBayar;
        jumlahLaporan++;
    }
}

void Rental::batalkanSewa() {
    if (penyewa.jumlahSewa == 0) {
        cout << "Tidak ada motor yang sedang disewa.\n";
        return;
    }

    cout << "\n=== Daftar Motor yang Disewa ===\n";
    for (int i = 0; i < penyewa.jumlahSewa; ++i) {
        int idx = penyewa.daftarSewa[i].index;
        cout << i+1 << ". " << mtr[idx] << " | Lama: " << penyewa.daftarSewa[i].lama << " hari\n";
    }

    int hapusIdx;
    cout << "Masukkan nomor motor yang ingin dibatalkan: ";
    cin >> hapusIdx;

    if (hapusIdx < 1 || hapusIdx > penyewa.jumlahSewa) {
        cout << "Pilihan tidak valid.\n";
        return;
    }

    int motorIndex = penyewa.daftarSewa[hapusIdx - 1].index;
    stok[motorIndex]++; 

    
    for (int i = hapusIdx - 1; i < penyewa.jumlahSewa - 1; i++) {
        penyewa.daftarSewa[i] = penyewa.daftarSewa[i + 1];
    }
    penyewa.jumlahSewa--;

    cout << "Motor berhasil dibatalkan dan stok dikembalikan.\n";

    char jawab;
    cout << "Apakah Anda ingin menyewa motor lain? (y/n): ";
    cin >> jawab;
    if (jawab == 'y' || jawab == 'Y') {
        inputSewaMotor(); 
    }
}

void Rental::ubahSewa() {
    if (penyewa.jumlahSewa == 0) {
        cout << "Belum ada motor yang disewa.\n";
        return;
    }

    int ubahIndex;
    cout << "\n=== UBAH DATA SEWA ===\n";
    cout << "Daftar motor yang sedang disewa:\n";
    for (int i = 0; i < penyewa.jumlahSewa; ++i) {
        cout << i + 1 << ". " << mtr[penyewa.daftarSewa[i].index] << " (" << penyewa.daftarSewa[i].lama << " hari)\n";
    }

    cout << "Pilih nomor motor yang ingin diubah: ";
    cin >> ubahIndex;
    ubahIndex--;

    if (ubahIndex < 0 || ubahIndex >= penyewa.jumlahSewa) {
        cout << "Pilihan tidak valid.\n";
        return;
    }

    int indexLama = penyewa.daftarSewa[ubahIndex].index;
    stok[indexLama]++;

    cout << "\nPilih motor pengganti:\n";
    for (int i = 0; i < MAX_MOTOR; ++i) {
        cout << i + 1 << ". " << mtr[i] << " (" << jenis[i] << ", " << cc[i] << ", Stok: " << stok[i] << ")\n";
    }

    int pilihBaru;
    cout << "Masukkan nomor motor baru: ";
    cin >> pilihBaru;
    pilihBaru--;

    if (pilihBaru < 0 || pilihBaru >= MAX_MOTOR || stok[pilihBaru] <= 0) {
        cout << "Pilihan tidak valid atau stok habis.\n";
        stok[indexLama]--;
        return;
    }

    int lamaBaru;
    cout << "Lama peminjaman (hari): ";
    cin >> lamaBaru;

    MotorDisewa baru;
    baru.index = pilihBaru;
    baru.lama = lamaBaru;
    baru.hargaAwal = harga_sewa[pilihBaru];
    baru.diskonDurasi = (lamaBaru > 7) ? 0.1 * baru.hargaAwal : 0;
    baru.diskonJumlah = (penyewa.jumlahSewa > 2) ? 0.1 * baru.hargaAwal : 0;
    baru.hargaAkhir = baru.hargaAwal - baru.diskonDurasi - baru.diskonJumlah;

    penyewa.daftarSewa[ubahIndex] = baru;
    stok[pilihBaru]--;

    cout << "Motor berhasil diubah.\n";
    cetakStruk();
}

void Rental::laporanPendapatan() {
    if (jumlahLaporan == 0) {
        cout << "Belum ada data penyewaan.\n";
        return;
    }

    int pilihan;
    cout << "\n=== Laporan Pendapatan ===\n";
    cout << "1. Pendapatan Harian\n";
    cout << "2. Pendapatan Bulanan\n";
    cout << "Pilih jenis laporan: ";
    cin >> pilihan;

    cin.ignore();

    string inputTanggal;
    cout << "Masukkan ";
    if (pilihan == 1) {
        cout << "tanggal (format: dd-mm-yyyy): ";
    } else if (pilihan == 2) {
        cout << "bulan dan tahun (format: mm-yyyy): ";
    } else {
        cout << "Pilihan tidak valid.\n";
        return;
    }
    getline(cin, inputTanggal);

    double total = 0;
    cout << "\n--- Daftar Transaksi ---\n";
    for (int i = 0; i < jumlahLaporan; i++) {
        bool cocok = false;

        if (pilihan == 1 && daftarLaporan[i].tanggal == inputTanggal) {
            cocok = true;
        } else if (pilihan == 2) {
            string bulanTahun = daftarLaporan[i].tanggal.substr(3);
            if (bulanTahun == inputTanggal) {
                cocok = true;
            }
        }

        if (cocok) {
            cout << "Nama: " << daftarLaporan[i].nama << endl;
            cout << "Tanggal: " << daftarLaporan[i].tanggal << endl;
            cout << "Total: Rp. " << daftarLaporan[i].totalPembayaran << endl;
            cout << "------------------------\n";
            total += daftarLaporan[i].totalPembayaran;
        }
    }

    cout << "\nTotal Pendapatan ";
    if (pilihan == 1) cout << "Harian";
    else cout << "Bulanan";
    cout << ": Rp. " << total << endl;
}

void Rental::buatBooking() {
    if (jumlahBooking >= MAX_LAPORAN) {
        cout << "Kapasitas booking penuh.\n";
        return;
    }

    string nama, tanggal;
    int pilih;

    cin.ignore();
    cout << "Nama Anda: ";
    getline(cin, nama);

    cout << "Tanggal booking (format dd-mm-yyyy): ";
    getline(cin, tanggal);

    cout << "\nDaftar Motor:\n";
    for (int i = 0; i < MAX_MOTOR; ++i) {
        cout << i + 1 << ". " << mtr[i] << " (" << jenis[i] << ", " << cc[i] << ", Stok: " << stok[i] << ")\n";
    }

    cout << "Pilih motor (nomor 1-" << MAX_MOTOR << "): ";
    cin >> pilih;
    pilih--;

    if (pilih < 0 || pilih >= MAX_MOTOR) {
        cout << "Pilihan tidak valid.\n";
        return;
    }

    for (int i = 0; i < jumlahBooking; ++i) {
        if (daftarBooking[i].tanggal == tanggal && daftarBooking[i].indexMotor == pilih) {
            cout << "Maaf, motor ini sudah dibooking pada tanggal tersebut.\n";
            return;
        }
    }

    Booking b;
	b.nama = nama;
	b.tanggal = tanggal;
	b.indexMotor = pilih;
	daftarBooking[jumlahBooking++] = b;
	cout << "Booking berhasil untuk motor " << mtr[pilih] << " pada tanggal " << tanggal << ".\n";
}

void Rental::tampilkanBooking() {
    if (jumlahBooking == 0) {
        cout << "Belum ada booking.\n";
        return;
    }

    cout << "\n=== DAFTAR BOOKING ===\n";
    for (int i = 0; i < jumlahBooking; ++i) {
        cout << i + 1 << ". Nama: " << daftarBooking[i].nama
             << ", Tanggal: " << daftarBooking[i].tanggal
             << ", Motor: " << mtr[daftarBooking[i].indexMotor] << "\n";
    }
}

void Rental::batalkanBooking() {
    if (jumlahBooking == 0) {
        cout << "Belum ada booking untuk dibatalkan.\n";
        return;
    }

    tampilkanBooking();

    int nomor;
    cout << "Masukkan nomor booking yang ingin dibatalkan: ";
    cin >> nomor;

    if (nomor < 1 || nomor > jumlahBooking) {
        cout << "Nomor tidak valid.\n";
        return;
    }

    for (int i = nomor - 1; i < jumlahBooking - 1; ++i) {
        daftarBooking[i] = daftarBooking[i + 1];
    }
    jumlahBooking--;

    cout << "Booking berhasil dibatalkan.\n";
}

void menuAdmin(Rental &r) {
    int pilihAdmin;
    do {
        cout << "\n=== MENU ADMIN ===";
        cout << "\n1. Cetak Struk"; 
        cout << "\n2. Pendapatan Harian";
        cout << "\n3. Pendapatan Bulanan";
        cout << "\n4. Cari Motor Berdasarkan Nama";
        cout << "\n5. Cari Motor Berdasarkan Jenis"; 
        cout << "\n6. Kembali";
        cout << "\nPilihan: ";
        cin >> pilihAdmin;

        switch(pilihAdmin) {
            case 1: r.cetakStruk(); break;
            case 2: r.laporanPendapatan(); break;
            case 3: r.laporanPendapatan(); break;
            case 4: cariMotorBerdasarkanNama(); break;
            case 5: cariMotorBerdasarkanJenis(); break; 
            case 6: break;
            default: cout << "Pilihan salah!";
        }
    } while(pilihAdmin != 6);
}



void menuPenyewa(Rental &r) {
    int pilihPenyewa;
    do {
        cout << "\n=== MENU PENYEWA ===\n";
        cout << "1. Sewa Motor Sekarang\n";
        cout << "2. Booking Motor\n";
        cout << "3. Lihat Daftar Booking\n";
        cout << "4. Batalkan Booking\n";
        cout << "5. Ubah Sewa\n";
        cout << "6. Batalkan Sewa\n";
        cout << "7. Cetak Struk\n";
        cout << "8. Cari Motor\n"; 
        cout << "9. Kembali ke Menu Utama\n";  
        cout << "Pilihan: ";
        cin >> pilihPenyewa;
		if (cin.fail()) {
    		cin.clear();
    		cin.ignore(10000, '\n');
    		cout << "Input tidak valid.\n";
    		continue;
		}
	

        switch (pilihPenyewa) {
            case 1: r.inputDataDiri(); r.inputSewaMotor(); break;
            case 2: r.buatBooking(); break;
            case 3: r.tampilkanBooking(); break;
            case 4: r.batalkanBooking(); break;
            case 5: r.ubahSewa(); break;
            case 6: r.batalkanSewa(); break;
            case 7: r.cetakStruk(); break;
            case 8: cariMotorBerdasarkanNama(); break;
            case 9: cout << "Kembali ke menu utama...\n"; break;
            default: cout << "Pilihan tidak valid.\n";
        }
    } while (pilihPenyewa != 9);
}


int main() {
    int pilihan;
    Rental r;

    do {
        cout << "\n=== SELAMAT DATANG DI RENTAL MOTOR ===\n";
        cout << "1. Admin\n";
        cout << "2. Penyewa\n";
        cout << "3. Keluar\n";
        cout << "Pilih peran (1-3): ";
        cin >> pilihan;
		if (cin.fail()) {
    		cin.clear();
    		cin.ignore(10000, '\n');
    		cout << "Input tidak valid. Harap masukkan angka 1-3.\n";
    		continue;
		}


        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Input tidak valid.\n";
            continue;
        }

        switch (pilihan) {
            case 1:
                menuAdmin(r);
                break;
                
            case 2:
                menuPenyewa(r);
                break;
                
            case 3:
            	system("cls");
                cout << "Terima kasih telah menggunakan layanan kami.\n";
                break;
                
            default:
                cout << "Pilihan tidak valid.\n";
        }

    } while (pilihan != 3);

    return 0;
}
