/* Bai5: Nhập vào số tuổi, ngày tháng năm 
#include <iostream>

using namespace std;

int main()
{
    int tuoi, ngay, thang, nam;
    cout << "Nhap vao so tuoi cua ban \t";
    cin >> tuoi;
    cout << "Toi nam nay \t" << tuoi << "\t tuoi roi!!" << endl;
    cout << "Nhap vao ngay thang nam sinh cua ban \t";
    cin >> ngay >> thang >> nam;
    cout << "Toi sinh ngay \t" << ngay << '-' << thang << '-' << nam << endl;
    return 0;

} */


//----------------------------------------------------------------------------------------------------------------------------------
 
/*Bài 6:  string*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ten;
    cout << "Nhap vao ho va ten cua ban: \t";
    fflush(stdin);                  // Hàm này xóa toàn bộ input còn dư trước đó để chạy hàm getline
                                    // Hoặc dùng ' cin.ignore(1) ' để xóa đi 1 kí tự còn dư trước đó, cụ thể là kí tự enter 
    getline(cin,ten);               // Dùng hàm getline để lấy toàn bộ, nếu dùng cin thì chỉ lấy được toàn bộ kí tự trước dấu cách!!
    cout << "Xin chao \t" << ten;
    return 0;

} 