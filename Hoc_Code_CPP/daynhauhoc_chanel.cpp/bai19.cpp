/* Bài 19: bài này cho thấy sự khác nhau giữa giá trị của biến và giá chị địa chỉ.
#include <iostream>
#include <string>
 using namespace std;

 int main()
 {
     int xoi = 1; int *xoi = &xoi;
     int banhmi = 2; int *banhmi = &banhmi;
     int pho =3 ; int *pho = &pho;
     cout << xoi << "---" << &xoi << endl;
     cout << banhmi << "---" << &banhmi << endl;
     cout << pho << "---" << &pho << endl;
     cout << "--------------------------------------------------------------------------------------------------------------" << endl;
     return 0;
 } */

//=====================================================================================================================================

/* Bài 20: Sử dụng ptr để in ra địa chỉ con trỏ, in giá trị ô nhớ đg trỏ hoặc đổi giá trị đó
Lưu ý: khi dùng ptr máy tự biết đang nói về con trỏ rồi, còn nếu dung *ptr tức là lấy ra giá trị của ô nhớ mà con trỏ đag trỏ
tới ( tức là *ptr1 tương đương với xoi  ở bài code dưới) */
#include <iostream>
#include <string>
using namespace std;
int main()
 {
     int xoi = 1; 
     int * ptr1 = &xoi; 
     int banhmi = 2; 
     int * ptr2 = &banhmi;
     int pho =3 ;
     int * ptr3 = &pho;
     cout << xoi << "---" << ptr1 << "---" << *ptr1 << endl;
     cout << banhmi << "---" << ptr2 << "---" << *ptr2 << endl;
     cout << pho << "---" << ptr3 << "---" << *ptr3 << endl;
     * ptr1 = 444; // hàm này sẽ đổi giá trị của xoi từ 1 sang 444
     cout << "--------------------------------------------------------------------------------------------------------------" << endl;
     return 0;
 } 