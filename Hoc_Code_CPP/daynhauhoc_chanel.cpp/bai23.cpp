/* Bài 23: Mảng 1 chiều  - Array đơn giản nhất */
#include <iostream>
using namespace std;

int main()
{
    int i=0;
    int j=0;
    int diemthi[6] = {5,6,7};
    char chucai[7] = {'l','e','h','u','u','a','n'};
    for(i=0; i<6; i++){
        cout << diemthi[i] << endl;
    }
    for(j=0; j<7; j++){
        cout << chucai[j];
    }
    cout << endl << "-------------------------------------------------------------------------------------------------------------" << endl;
    return 0;
}