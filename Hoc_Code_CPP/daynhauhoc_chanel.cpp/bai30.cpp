/* Mảng 2 chiều *
#include <iostream>
using namespace std;

int main()
{
    int hang=0; int cot=0;
    int mang2chieu[2][3] = 
    { 
        {1,2,3} , 
        {4,5,6} 
    };
    for(hang=0 ; hang<2; hang++)
    {
        for(cot=0; cot<3; cot++)
        {
            cout << mang2chieu[hang][cot] << "   ";
        }
        cout << endl;
    }
    return 0;
} */

#include <iostream>
using namespace std;
// Truyền mảng 2 chiều vào hàm, in ra mảng 2 chiều
void inMangHaiChieu(int mangHaiChieu[2][3], int soHang, int soCot) 
{
    for (int hang=0; hang< soHang; hang ++)
    {
        for (int cot=0; cot<soCot; cot++)
        {
            cout << mangHaiChieu[hang][cot] << "  ";
        }
        cout << endl;
    }
}
int main(){
    int mangHaiChieu[2][3]={ {1,2,3} , {4,5,6} }; //Nhập vào mảng 2 chiều
    inMangHaiChieu (mangHaiChieu, 2, 3);
    cout << "---------------------------------------------------------------------------------------------------------------" << endl;
    return 0;
}
                                           