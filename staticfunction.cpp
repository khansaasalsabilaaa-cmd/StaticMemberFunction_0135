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

