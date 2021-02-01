#include <iostream>

using namespace std;

int main()
{
    string nama,alamat;
    int tinggi;
    
    cout<<"======Program Input Biodata======"<<endl;
    cout<<"Masukan Nama Anda = ";
    getline(cin,nama);
    cout<<"Masukan Alamat Anda = ";
    getline(cin,alamat);
    cout<<"Masukan Tinggi Badan = ";
   cin>>tinggi;
   
    cout<<"======HASIL INPUT======"<<endl;
    cout<<"Nama = " <<nama <<endl;
    cout<<"Alamat = " <<alamat <<endl;
    cout<<"Tinggi badan = " <<tinggi <<endl;
    return 0;
}