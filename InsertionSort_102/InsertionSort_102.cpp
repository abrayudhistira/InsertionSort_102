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