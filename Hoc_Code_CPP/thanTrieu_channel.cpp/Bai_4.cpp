// Nhập chuỗi 

#include<iostream>
#include<cstring>

using namespace std;



int main()
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2); 
    /*char str1[80];
    char str2[40];
    cout << "Nhap vao 2 chuoi: " << endl;
    cin.getline(str1,80);
    cin.getline(str2,40);*/
    cout << "str1 truoc khi noi: " << str1 << endl;
    cout << "Do dai cua str1 truoc khi noi la: "<< str1.length() << endl;
    str1 += str2;
    cout << "str1 truoc khi noi: " << str1 << endl;
    cout << "Do dai cua str1 truoc khi noi la: "<< str1.length() << endl;
    cout << "=========================================================================================================================";
    return 0;
}