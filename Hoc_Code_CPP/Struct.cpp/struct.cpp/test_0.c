#include<stdio.h>

/* Cu phap: 
- Cach 1:
    struct tenStruct{
        khai bao cac thanh phan;
    };
- Cach 2:
    struct tenStruct{
        khai bao cac thanh phan;
    }danh sach cac bien thuoc kieu cau truc;
- Cach 3:
    struct{
        khai bien cac thanh phan;
    }danh sach cac bien thuoc kieu cau truc;
*/
struct nhanVien{
    char maNV[10];
    char hoTen[30];
}nv1,nv2;

int nhap(){
    printf("Nhap ma nhan vien: ");
    gets(nv1.maNV);
    printf("Nhap ho ten: ");
    gets(nv1.hoTen);
}

int main(){
    printf("\n------------------------------------------------------------------");
    printf("Nhap du lieu cho nhan vien 1: \n");
    nhap(nv1);
    printf("Nhap du lieu cho nhan vien 2: \n");
    nhap(nv2);
    printf("\n------------------------------------------------------------------");
    return 0;
}
