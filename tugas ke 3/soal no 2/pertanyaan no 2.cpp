#include <iostream>
using namespace std;

int main() {
    int hargabarang, jumlahbarang;
    double diskon, totalBayar;

    cout << "Masukkan harga barang: ";
    cin >> hargabarang;
    cout << "Masukkan jumlah barang: ";
    cin >> jumlahbarang;

    if (jumlahbarang > 100) {
        diskon = 0.15;
    } else {
        diskon = 0.05;
    }

    double beli = hargabarang * jumlahbarang;
    double potongan = beli * diskon;
    totalBayar = beli - potongan;

    cout << "Total beli: " << beli << endl;
    cout << "Diskon: " << diskon * 100 << "%" << endl;
    cout << "Total yang harus dibayar: " << totalBayar << endl;

    return 0;
}
