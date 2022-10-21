/* Bài 32: Tạo ra dãy 5 số ngẫu nhiên*
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
//  srand(0);       //nếu để như này thì nhân không đổi, chỉ khi đổi số 0 thành số khác thì mới đc dãy khác
    srand(time(0)); // dùng hàm time thì mỗi giây sẽ cho ra 1 cái nhân khác
    cout << time(0) << endl;
    for(int i=0; i<5; i++) 
    {
        cout <<"So thu "<< i+1<< " = " <<20 + rand()%10 << endl; // dòng này để in ra các con số ngẫu nhiên trong khoảng từ 20 đến 29
    }                                                         // muốn thay đổi thì đổi số 20 đi :))
    return 0;


} */

//===============================================================================================================================

/* Bài 33: Tìm số lớn nhất trong mảng ngẫu nhiên */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    srand(time(0));
    int mangngaunhien[10];
    for (int i=0; i<10; i++)
        {
            mangngaunhien[i] = rand()%100;
            cout << mangngaunhien[i] << " " ;
        }
    int max = mangngaunhien[0];
    for (int i=0; i<10; i++)
    {
        if(max < mangngaunhien[i]) max= mangngaunhien[i];
    
    }
    cout << endl << "Phan tu lon nhat trong mang la: " << max;
    cout << endl << "-------------------------------------------------------------------------------------------------------" << endl;
    return 0;

}