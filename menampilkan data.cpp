#include <iostream>
#include <string>
using namespace std;

class Hewan
{
    public:
        string nama;
        string kingdom;
        string filum;
        string kelas;
        string ordo;

    Hewan(string masukanNama,string masukanKingdom,string masukanFilum,string masukanKelas,string masukanOrdo)
    {
        Hewan::nama = masukanNama;
        Hewan::kingdom = masukanKingdom;
        Hewan::filum = masukanFilum;
        Hewan::kelas = masukanKelas;
        Hewan::ordo = masukanOrdo;

        cout<<"Nama    :" <<Hewan::nama <<endl;
        cout<<"Kingdom :" <<Hewan::kingdom <<endl;
        cout<<"Filum   :" <<Hewan::filum <<endl;
        cout<<"Kelas   :" <<Hewan::kelas <<endl;
        cout<<"Ordo    :" <<Hewan::ordo <<endl;
        cout<<endl; 
    }
};

int main()
{
  Hewan hewan1 = Hewan("inputNama","inputKingdom","inputFilum","inputKelas","inputOrdo");
  Hewan hewan2 = Hewan("inputNama","inputKingdom","inputFilum","inputKelas","inputOrdo");
  Hewan hewan3 = Hewan("inputNama","inputKingdom","inputFilum","inputKelas","inputOrdo");
  Hewan hewan3 = Hewan("inputNama","inputKingdom","inputFilum","inputKelas","inputOrdo");
  Hewan hewan4 = Hewan("inputNama","inputKingdom","inputFilum","inputKelas","inputOrdo");
  Hewan hewan5 = Hewan("inputNama","inputKingdom","inputFilum","inputKelas","inputOrdo");

  return 0;
}