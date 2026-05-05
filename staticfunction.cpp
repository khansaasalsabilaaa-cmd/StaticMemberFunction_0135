#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{

private:
    static int nim;
public:
    int id;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pnim){
        nim = pnim;
    };

    static int getNim(){
        return nim;
    }

    Mahasiswa(string pnama) :nama(pnama){
        setID();
    };
};

int Mahasiswa::nim = 0;

void Mahasiswa::setID() {
    id = ++nim;
}

void Mahasiswa::printAll(){
    cout << "ID = " << id << endl;
    cout << "nama = " << nama << endl;
    cout << endl;
}

int main() {
    Mahasiswa mhs1("Sri Dadi");
    Mahasiswa mhs2("Budi Jataiko");
    Mahasiswa::setNim(9);
    Mahasiswa mhs3("Andi Juna");
    Mahasiswa mhs4("Joko Wahono");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    cout << "akses dari luar objek = " << Mahasiswa::getNim() << endl;
    system("pause");

    return 0;
}