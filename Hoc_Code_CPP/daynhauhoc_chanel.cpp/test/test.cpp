#include <iostream>
using namespace std;

int main()
{
    int i=0;
    int diemthi[6] = {5,6,7};
    for(i=0; i<6; i++){
        cout << diemthi[i] << "---"<< hex << &diemthi[i] << endl; 
    }
    return 0;
}