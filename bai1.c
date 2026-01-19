/******************************************************************************
 * Họ và tên:[Phạm Nguyễn Ngọc Triều]
 * MSSV:      [PS49280]
 * Lớp:       [COM108]
 *****************************************************************************/

// BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC  
// Input: Nhập vào điểm của sinh viên (0-10) 
// Output: Hiển thị ra màn hình học lực của sinh viên 
// Biết rằng: 
// Học lực xuất sắc: Điểm >= 9 
// Học lực giỏi: 9 > điểm >= 8 
// Học lực khá: 8 > điểm >= 6.5 
// Học lực trung bình: 6.5 > điểm >= 5 
// Học lực yếu: 5 > điểm >= 3.5 
// Học lực kém: 3.5 > điểm

#include <stdio.h>

int main(){
float diem ;
printf("Nhap diem so sinh vien(0-10): ");
scanf("%f", diem);

if(diem < 0 || diem > 10) {
    printf("Diem khong hop le");
} else if (diem>=9){
    printf("Học luc xuat săc");
}else if (diem>=8){
    printf("Học luc giỏi");
}else if (diem>=6.5){
    printf("Học luc kha");
}else if (diem>=5){
      printf("Học luc tb");
}else if (diem>=3.5){
      printf("Học luc yếu");
}else {
     printf("Học luc kém");
}
    
    return 0;
}