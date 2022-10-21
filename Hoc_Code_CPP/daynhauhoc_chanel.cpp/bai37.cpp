#include <iostream>
using namespace std;
int main()
{
    // Cách 1:
    char motkytu='x'; // dùng char như này chỉ in ra được 1 ký tự
    char nhieukytu[100];
    nhieukytu[0] ='X' ;
    nhieukytu[1] ='i' ;
    nhieukytu[2] ='n' ;
    nhieukytu[3] =' ' ;
    nhieukytu[4] ='c' ;
    nhieukytu[5] ='h' ;
    nhieukytu[6] ='a' ;
    nhieukytu[7] ='o' ;
    nhieukytu[8] =0 ; //Ký tự kết thúc chuỗi.
    cout << nhieukytu << endl;
    // Cách 2:
    char chuoikytu[100] = "Xin chao cac ban";
    cout << chuoikytu;
    cout << endl << "-------------------------------------------------------------------------------------------------------" << endl;
    return 0;
}
                 
                 