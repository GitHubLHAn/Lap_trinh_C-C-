#include <iostream>
#include <string>

using namespace std;

void tinhtuoi(int tuoibonow, int tuoimenow);
//Hàm có tham số, nhiều tham số
int main()
{
    int tuoibo, tuoime;
    cout << "Nhap vao so tuoi cua bo ban: \t" ;
    cin >> tuoibo ;
    cout << "Nhap vao so tuoi cua me ban: \t" ;
    cin >> tuoime ;
    tinhtuoi(tuoibo,tuoime);
    cout << "---------------------------------------------------------------------------------------------------------------" << endl;
    return 0;
}

void tinhtuoi(int tuoibonow, int tuoimenow)
{
    cout << "10 nam sau bo ban se \t" << tuoibonow + 10 << "\t tuoi" << endl;
    cout << "10 nam sau me ban se \t" << tuoimenow + 10 << "\t tuoi" << endl;
}