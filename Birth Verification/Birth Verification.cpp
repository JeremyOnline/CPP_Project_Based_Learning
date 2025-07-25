#include <iostream>
#include <ctime>



using namespace std;

int umur_user(int yyyy, int mm, int dd){
    int tahun = 2025 - yyyy;
    int bulan = mm - 7;
    int hari = dd - 26;
    int umur = tahun + bulan/12 + hari/365;
    return umur;
}


int main() {
    int tahun;
    int bulan;
    int hari;

    /*
    Birth Verification
    ===============
    Give Your Born date, we give your age
    */

    cout << "====BIRTH VERIFICATION====" << endl;
    cout << endl;
    cout << "Enter Your Birth Year(YYYY/MM/DD): ";
    cin >> tahun >> bulan >> hari;
    cout <<"Umur Kamu adalah : " << umur_user(tahun, bulan, hari) << " tahun" << endl;
    cout << bulan << "/" << hari << "/" << tahun << endl;
    
    





    return 0;
}