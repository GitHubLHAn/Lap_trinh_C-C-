#include <iostream>
using namespace std;

int main()
{
    int choose;
    cout << "Ban muon an gi?" << endl;
    cout << "1.Com \t 2.Bun \t 3.Thitnuong" << endl << "4.Chao \t 5.Xoi \t 6.Thit ga"<< endl;

    cin >> choose ;
    switch (choose)
    {
        case 1:
            cout << "Com rat ngon" << endl;
            break;
        case 2:
            cout << "Van con nhieu bun" << endl;
            break;
        case 3:
            cout << "Chao bi loang" << endl;
            break;
        case 4:
        case 5:     // Nhóm 3 trường hợp này thực hiện 1 lệnh
        case 6:
            cout << "Mon Hang Nay Da Het" << endl;
            break;
        default: 
            cout << "Lua chon cua ban khong hop le!";

    }
    cout << endl << "-------------------------------------------------------------------------------------------------------" << endl;
    return 0;
}