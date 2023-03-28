#include<stdio.h>
#include<conio.h>

struct SOTIETKIEM
{
  	char Ms[5];
  	char Loaitietkiem[10];
  	char Hoten[30];
    int CMND; 
	  int ngay,thang,nam;
    float Sotiengui;
   
};
typedef struct SOTIETKIEM STK;

void Nhap(SOTIENKIEN &s)
{
	  flush(stdin);
    printf("Nhap vao ma so: ");
    gets(s.Ms);
    printf("Nhap loai tiet kiem: ");
    gets(s.Loaitietkiem);
    printf("Nhap ho ten khach hang: ");
    gets(s.Hoten);
    printf("Nhap so CMND: ");
    scnaf("%d",&s.CMND)
  	printf("Nhap ngay thang nam: ");
	  scanf("%d%d%d", &s.ngay,&s.thang,&s.nam);
	  printf("Nhap vao so tien gui: ");
    scanf("%f", &s.Sotiengui);
}

void Xuat(SOTIENKIEN )
{
	  printf("Ma so: %d\n", s.Ms);
    printf("\n%d",s.Loaitietkiem);
  	printf("%d\n", s.Hoten);
  	printf("CMND: %d\n", s.CMND);
    printf("%d/%d/%d\n", s.ngay,s.thang,s.nam);
    printf("%.2f\n", s.Sotiengui);
}

int main()
{
    SOTIETKIEM STK;
    Nhap(STK);
    Xuat(STK);
    getch();
    return 0;
}
