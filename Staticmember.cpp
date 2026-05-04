#include <iostream>
using namespace std;

class mahasiswa{ 

    public:
        static int nim;
        int id;
        string nama;

    void setID();
    void printall();


    mahasiswa (string pnama) :nama(pnama){
        setID();
    }
};

int mahasiswa::nim = 5;

void::mahasiswa::setID(){
        id = ++nim;
};

void mahasiswa ::printall(){

    cout << "id" << id << endl;
    cout << "nama" << nama << endl;
};