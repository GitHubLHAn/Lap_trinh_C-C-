// Bài 1: Viết một chương tình C++ kiểm tra số nguyên tố
#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

int check(int n);

int main()
{
    int N;
    cout << " Nhap vao so nguyen N = ";
    cin >> N;
    check(N);
    return 0;
}

int check(int n)
{
    if(n == 0 || n == 1) cout << n << " khong phai la so nguyen to!";
    if( n==2 || n== 3) cout << n << " la so nguyen to!";
    for(int i = 2; i< n; i++)
    {
        if((n%i)==0) 
        {
            cout << n << " khong phai la so nguyen to!";
            return 0;
        }
    }
    cout << n << " la so nguyen to!";
    return 0;
}


