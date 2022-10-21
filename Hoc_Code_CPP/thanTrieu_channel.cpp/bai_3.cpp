// Bai 3 : Viết chương trình C++ tìm ước số chung lớn nhất (UCLN) và bội số chung nhỏ nhất (BCNN) của hai số a và b.
#include<iostream>

using namespace std;

int ucln(int a, int b)
{
    int ucln;
    if(a==0) ucln = b;
    if(b==0) ucln = a;
    else
    {
        for(int i = a; i>0; i--)
        {
            if((a%i)==0 && (b%i)==0) 
                {
                    ucln = i;
                    break;
                }
        }
    }
    return ucln;  
}

int bcnn(int a, int b)
{
    int bcnn;
    if( a==0 || b==0) return -1;
    else
    {
        for(int i = a; i< (a*b+1); i++)
        {
            if((i%a)==0 && (i%b)==0)
            {
                bcnn = i;
                break;
            }
        }
    }
    return bcnn;
}

int main()
{
    int A,B;
    cout << "Nhap vao 2 so A va B: ";
    cin >> A >> B;
    cout << "Uoc chung lon nhat cua " << A << " va " << B << " la: "<< ucln(A,B) << endl;
    cout << "Boi chung nho nhat cua " << A << " va " << B << " la: "<< bcnn(A,B) << endl;
    cout << "========================================================================================";
    return 0;
}