#include <iostream>
using namespace std;

class Kendaraan {
private:
    int idKendaraan;
    string namaKendaraan;

public:
    Kendaraan() {
        idKendaraan = 0;
        namaKendaraan = "Tidak diketahui";
    }

    Kendaraan(int id) {
        idKendaraan = id;
        namaKendaraan = "Tidak diketahui";
    }

    Kendaraan(string nama) {
        idKendaraan = 0;
        namaKendaraan = nama;
    }

    Kendaraan(int id, string nama) {
        idKendaraan = id;
        namaKendaraan = nama;
    }

    void tampilkan() {
        cout << "ID Kendaraan   : " << idKendaraan << endl;
        cout << "Nama Kendaraan : " << namaKendaraan << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    Kendaraan k1;                    
    Kendaraan k2(101);               
    Kendaraan k3("Motor");  
    Kendaraan k4(202, "Mobil");         

    cout << "Data Kendaraan:\n";
    k1.tampilkan();
    k2.tampilkan();
    k3.tampilkan();
    k4.tampilkan();

    return 0;
}