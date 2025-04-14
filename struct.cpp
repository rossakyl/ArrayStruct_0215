#include <iostream>
using namespace std;

struct Buku {
    string judul;
    string jumlahhalaman;
    string pengarang;
};

int main(){
    Buku bk;

    cout << "masukkan judul = ";
    cin >> bk.judul;
    cout << "masukkan jumlah halaman = ";
    cin >> bk.jumlahhalaman;
    cout << "masukkan pengarang = ";
    cin >> bk.pengarang;

    cout << endl;
    cout << "tampilkan data buku" << endl;
    cout << endl;

    
    cout << "judul buku = " << bk.judul <<endl;
    cout << "jumlah halaman buku = " << bk.jumlahhalaman << endl;
    cout << "pengarang buku = " << bk.pengarang << endl;

}