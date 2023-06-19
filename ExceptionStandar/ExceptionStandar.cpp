#include <exception>
#include <iostream>
//untuk obyek exception yang akan digunakan
#include <array>
//untuk obyek array yang akan kita gunakan
using namespace std;


int main()
{
    cout << "Awal Program" << endl; //penanda 1:...
    try {
        array<int, 3> data = { 1, 2, 3, };
        //pesan array integer 3 elemen
        //cout<<data.at(5)<<endl;
        //memanggil array elemen ke 5
    }
    catch (exception& e) {
        //penangkap menggunakan obyek exception
        cout << e.what() << endl;
        /*akan dieksekusi karna array data hanya
        memiliki 3 elemen*/
    }
    cout << "Baris Program yang terakhir" << endl;
    /*penanda 2: bahwa program berjalan tanpa berhenti
    meskipun terjadi kesalahan*/
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
