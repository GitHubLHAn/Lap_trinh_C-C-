#include <iostream>
//Tính tổng tích hiệu thương 2 số có sẵn
using namespace std;

int main()
{
    int a = 5;
    int b = 7;
    int tong, tich, hieu, thuong;
    tong = a+b;
    tich = a*b;
    hieu = a-b;
    thuong = a/b;
    cout << "Tong cua hai so la " << tong << endl;
    cout << "Hieu cua hai so la " << hieu << endl;
    cout << "Tich cua hai so la " << tich << endl;
    cout << "Thuong cua hai so la " << thuong << endl;
    return 0;

}