#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk melakukan rotasi kiri sebanyak d kali pada array arr_deryl
vector<int> rotasiKiri(int d, const vector<int>& arr_deryl) {
    int n = arr_deryl.size();
    vector<int> hasil(n);

    d = d % n; // memastikan jumlah rotasi tidak melebihi panjang array
    
    for (int i = 0; i < n; ++i) {
        hasil[i] = arr_deryl[(i + d) % n]; // menghitung indeks baru untuk rotasi kiri
    }
    return hasil;
}

int main() {
    int n, d;
    cout << "Masukkan jumlah elemen (n) dan jumlah rotasi kiri (d): ";
    cin >> n >> d;

    vector<int> arr_deryl(n);
    cout << "Masukkan " << n << " elemen array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr_deryl[i];
    }

    vector<int> hasil_rotasi = rotasiKiri(d, arr_deryl);

    cout << "Array setelah rotasi kiri sebanyak " << d << " kali:\n";
    for (int i = 0; i < hasil_rotasi.size(); ++i) {
        cout << hasil_rotasi[i];
        if (i < hasil_rotasi.size() - 1) cout << " ";
    }
    cout << endl;

    return 0;
}

/*
Program meminta pengguna memasukkan jumlah elemen array dan jumlah
pergeseran ke kiri. Setelah itu, elemen-elemen array disimpan ke dalam vector. 
Fungsi rotasiKiri kemudian dipanggil untuk melakukan rotasi dengan menghitung indeks baru menggunakan operasi modulo 
agar pergeseran bersifat melingkar. Fungsi mengembalikan vector baru yang berisi hasil rotasi, dan hasil tersebut ditampilkan kembali ke layar.
*///Masukkan jawaban disini
