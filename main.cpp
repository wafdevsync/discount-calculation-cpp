#include <iostream> 
#include <string>
using namespace std;

int main() {
    string namabarang;
    int harga;
    int jumlah;
    int total;
    int diskon;
    int total_bayar;

    cout << "Masukaan nama barang :";
    getline (cin, namabarang);

    cout << "masukkan harga barang :";
    cin >> harga;

    cout << "masukkan jumlah barang :";
    cin >> jumlah;
    total = harga * jumlah;
    diskon = total * 10 / 100;
    total_bayar = total - diskon;

    cout << "Nama barang : " << namabarang << endl;
    cout << "Harga : " << harga << endl;
    cout << "Jumlah : " << jumlah << endl;
    cout << "Total : " << total << endl;
    cout << "Diskon : " << diskon << endl;
    cout << "Total Bayar : " << total_bayar << endl;

    return 0;
}