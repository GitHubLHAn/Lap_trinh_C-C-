#include <iostream>
using namespace std;
// Con tro va mang
int main()
{                    
    
    char mang1chieu[3] = {'1','2','3'};
    char * controChar = 0; 
    controChar = &mang1chieu[2]; 
    cout << mang1chieu[2] << "---" << controChar << endl; 
    controChar--;
    cout << mang1chieu[1] << "---" << controChar << endl; 
    controChar--;
    cout << mang1chieu[0] << "---" << controChar << endl; 
    cout << "---------------------------------------------------------------------------------------------------------------" << endl;
    return 0;
}
