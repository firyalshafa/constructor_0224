

#include <iostream>
using namespace std;

class mahasiswa
{
private:
    static int nim;
    int id;
    string nama;
    void setID();
    void printAll();
    mahasiswa(string pnama)
    {
        nama = pnama;
        setID();
    }
};

int mahasiswa::nim = 224;


int main()
{
    std::cout << "Hello World!\n";
}


