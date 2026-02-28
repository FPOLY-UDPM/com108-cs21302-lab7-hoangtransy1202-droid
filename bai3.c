/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>

int main() {
    // 1. Khai báo mảng 2 chiều để chứa 5 chuỗi, mỗi chuỗi tối đa 50 ký tự
    char s[5][50];
    char temp[50]; // Biến tạm để hoán đổi chuỗi

    printf("=== NHAP 5 CHUOI BAT KY ===\n");

    // 2. Nhập dữ liệu
    for (int i = 0; i < 5; i++) {
        printf("Nhap chuoi thu %d: ", i + 1);
        scanf("%s", s[i]); 
    }

    // 3. Thuật toán sắp xếp (Interchange Sort)
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            // So sánh hai chuỗi s[i] và s[j]
            // Nếu kết quả > 0 nghĩa là s[i] đứng sau s[j] theo thứ tự từ điển
            if (strcmp(s[i], s[j]) > 0) {
                // Thực hiện hoán đổi nội dung hai chuỗi dùng strcpy
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    // 4. Xuất kết quả sau khi sắp xếp
    printf("\n=== DANH SACH CHUOI DA SAP XEP (A-Z) ===\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", s[i]);
    }

    return 0;
}