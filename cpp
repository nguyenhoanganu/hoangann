 Hãy khai báo kiểu dữ liệu biểu diễn khái niệm điểm trong mặt phẳng Oxy và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này

#include<stdio.h>
#include<conio.h> 

struct Diem
{
  float x ;
  float y ;
};
typedef struct Diem DIEM;
void NhapDiem (DIEM &);
void XuatDiem (DIEM );

void NhapDiem(DIEM &d)
{
  float temp;
  printf("\nNhap x:");
  scantf("%f"&temp);
  d.x=temp;
  printf("\nNhap y:");
  scantf("%f"&temp);
  d.x=temp;
}
void XuatDiem(DIEM &d)
{
  printf("(%8.3f,%8.3f)",d.x,d.y);
}
int main()
{
  DIEM d;
  NhapDiem (d);
  XuatDiem (d);
  getch ();
  return 0;
}
