// pertemuan2lagilagii.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int nilaiMatematika, nilaiFisika, nRerata;
    string status;

    cout << "Masukan Nilai Matematika : ";
    cin >> nilaiMatematika;

    cout << "Masukan Nilai Matematika : ";
    cin >> nilaiFisika;

    nRerata = (nilaiMatematika + nilaiFisika) / 2;

    if (nRerata > 60) {
        status = "Lulus";
    }
    else if (nilaiMatematika > 70) {
        status = "Lulus";
    }
    else {
        status = "Tidak Lulus";
    }

    cout << "Nilai MTK : " << nilaiMatematika << endl;
    cout << "NilaiFisika : " << nilaiFisika << endl;
    cout << "Rata-rata nilai : " << nRerata << endl;
    
    return 0;

}
    
