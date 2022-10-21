#include <iostream> 
#include <string>
using namespace std;
/*Class, lớp. Làm như bên dưới dành cho những bài code rất dài, chữ name bên dưới dùng riêng nên chỉ dùng trong ngoặc 
vì vậy nên khi đổi name chỉ cần đổi ở 1 cụm lophoclaptrinh() thôi, không phải đi dò từng dòng code để sửa
-------------------------------------------------------------------------------------------------------------------------
class LopHocLapTrinh{
    public: // chung
        string name;
};
int main(){
    LopHocLapTrinh lopHoc;
    lopHoc.name="lop hoc lap trinh C++";
    cout << lopHoc.name << endl;
    return 0;
}------------------------------------------------ như bài này nếu đổi name thì phải đổi hết trong hàm int main(),mệt*/
class lophoclaptrinh{
    public: //chung, ai cũng xài được
        void setname(string tenGi){
            name = tenGi;
        }
        string getname(){
            return name + "rat la de hieu!";
        }
    private: // chỉ sử dụng trong dấu ngoặc nhọn class này, không xài ở bên dưới đc
        string name;
};
int main()
{ 
    lophoclaptrinh lophoc; // thực thể
    lophoc.setname("lop hoc lap trinh CPP");
    cout << lophoc.getname()  << endl;  
    cout << "---------------------------------------------------------------------------------------------------------------" << endl;  
    return 0;
}
                      