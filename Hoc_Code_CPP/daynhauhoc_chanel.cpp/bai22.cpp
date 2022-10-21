// Bài 22: for loop, sử dụng vòng lặp for
#include <iostream>

using namespace std;
 
int main()
{
    int biendem;
    for (biendem=1; biendem<11; biendem++)
    {
        if (biendem % 2 == 0) {  // % là toán tử chia lấy dư
        cout << biendem << endl;}
    }
    cout << "---------------------------------------------------------------------------------------------------------------" << endl;
    return 0;

}