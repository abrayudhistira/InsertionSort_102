#include <iostream>
using namespace std;

int arr[20]; //membuat array dengan panjang data 20
int n;

void input()
{   //Procedure input
    while (true)
    {
        cout << "Masukkan Jumlah Data pada Array : "; //membuat inputan jumlah elemen array
        cin >> n;                                    //Memanggil variabel inputan n
        if (n <= 20)
        { //membuat kondisi n tidak lebih dari 20
            break;

        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 elemen. \n";    //menampilkan pesan jika maksimal data 20 elemen
        }
    }
    cout << endl;                               //membuat jarak per baris program
    cout << "=====================" << endl;    //membuat tampilan susunan data element array
    cout << "Masukkan Element Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++)     //menggunakan perulangan for untuk menyimpan data pada array