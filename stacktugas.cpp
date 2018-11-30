#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>

using namespace std;

 int main() {
    int plh;
    int top = 0, i;
    int sisa;
    char Nama[20][20], Umur[20][20];
    do
        { 
        cout << "----------------------------\n";
        cout << " MENU\n";
        cout << "----------------------------\n";
        cout << "1.TAMBAH STACK \n";
        cout << "2.KELUARKAN STACK \n";
        cout << "3.CEK KOSONG / ISI ? \n";
        cout << "4.BERSIHKAN DATA STACK \n";
        cout << "5.LIHAT DATA STACK \n";
        cout << "6.KELUAR \n";
        cout << "............................\n";
        cout << "Masukkan Pilihan : ";cin >> plh;

        if (plh <= 6){ 
            switch (plh)
            { case 1:
         if (top == 4) {
            cout << "Maaf, Tumpukan PENUH!!" << endl;

        } else {
            cout << "Masukkan Nama pemain : "; cin >> Nama[top + 1];
            cout << "Masukkan umur : "; cin >> Umur[top + 1];
            cout << "Tumpukan sudah dimasukkan!!" << endl;
        top++; }
            break;
            case 2:
         if (top<1) {
        cout << "Tumpukan Sudah KOSONG!!" << endl;
          } else {
        cout << "\nTumpukan yang dikeluarkan :" << top << "\n\n";
        cout << "Nama : " << Nama[top] << endl;
          cout << "Umur : " << Umur[top] << endl;
          top--; cout << "Tumpukan sudah dikeluarkan!!" << endl; } break;
            case 3:
        if (top == 3){
        cout << "Tumpukan Sudah PENUH!!" << endl;
        }else if
        (top >= 1) { sisa = 3 - top;
        cout << "Tumpukan Belum Penuh, Anda Mempunyai " << sisa << " Ruang Data" << endl;
        } else if (top == 0) {
        cout << "Sekarang Tumpukan KOSONG!!" << endl;
        } break; case 4:
        top = 0;
        cout << "Tumpukan Sudah Dihapus Semua!" << endl;
        break; case 5:
        cout << "NO || Nama|| umur ||\n";
        if (top == 0)
        cout << "Tumpukan Kosong!!" << endl;
        else for (i = 1; i <= top;
        i++){
        cout<<setiosflags(ios::left)<<setw(8)<<i;
        cout<<setiosflags(ios::left)<<setw(17)<<Nama[i];
        cout<<setiosflags(ios::left)<<setw(10)<< Umur[i] << endl;
        } break; case 6: cout << "\n\nKELUAR.........";
        break;
        } } else {
        cout << "Pilihan Salah , Silahkan Masukkan 1-6" << endl;
        } } while (plh != 6);
}
