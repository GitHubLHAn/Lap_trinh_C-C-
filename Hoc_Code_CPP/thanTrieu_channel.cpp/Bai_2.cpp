// Bài 2: Viết một chương trình C++ tính giai thừa của một số bằng cách không sử dụng đệ quy và có sử dụng đệ quy

#include<iostream>

using namespace std;

int gt1 = 1;
int gt2 = 1;

int dungDeQuy(int n)
{
    gt1 *= n;
    n--;
    if(n>0)    dungDeQuy(n);
    return gt1;
}

int khongDungDeQuy(int n)
{
    for(int i = n; i>0; i--)
    {
        gt2 *= i;
    }
    return gt2;
}

int main()
{
    int N;
    cout << "Nhap vao so nguyen N = ";
    cin >> N;
    if(N==0||N ==1 ) cout << "gt1 = gt2 = 1" << endl;
    else
    {
        cout << "Giai thua dung de quy = " << dungDeQuy(N) << endl;
        cout << "Giai thua khong dung de quy = " << khongDungDeQuy(N) << endl;
    }
    cout << "================================================================================";
    return 0;
}

