#include <stdio.h>
#include<stdlib.h>
struct Diem{
	int diemToan;
	int diemLy;
	int diemHoa;
};
struct SinhVien{
	char hotenSV[30];
	char gioitinh[10];
	Diem *diem;
};

void nhap(Diem *input);
void xuat(Diem *output);
void nhap(SinhVien *input);
void xuat(SinhVien *output);

int main(){
	SinhVien *sinhvien;
	sinhvien = (SinhVien*)malloc(sizeof(SinhVien));
	nhap(sinhvien);
	xuat(sinhvien);
}
void nhap(Diem *input){
	printf("\nNhap diem toan :");
	scanf("%d",&input->diemToan);
	printf("Nhap diem hoa :");
	scanf("%d",&input->diemHoa);
	printf("Nhap diem ly :");
	scanf("%d",&input->diemLy);
}
void xuat(Diem *output){
	printf("Diem toan : %d",output->diemToan);
	printf("\nDiem hoa: %d",output->diemHoa);
	printf("\nDiem ly: %d",output->diemLy);
	printf("\nDiem tb: %d",(output->diemToan+output->diemLy+output->diemHoa)/3);
}
void nhap(SinhVien *input){
	printf("Nhap ten sv :");
	gets(input->hotenSV);
	printf("Nhap gioi tinh:");
	gets(input->gioitinh);
	printf("Nhap diem: ");
	input->diem = (Diem*)malloc(sizeof(Diem));
	nhap(input->diem);
}
void xuat(SinhVien *output){
	printf("\nTen sv :");
	puts(output->hotenSV);
	printf("Gioi tinh :");
	puts(output->gioitinh);
	xuat(output->diem);
}
