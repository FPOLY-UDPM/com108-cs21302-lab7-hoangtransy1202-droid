/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>
#include <ctype.h> // Thu vien de dung ham tolower() va isalpha()

int main() {
    char s[100];
    int nguyenAm = 0, phuAm = 0;

    // 1. Nhap chuoi (dung fgets de nhan duoc ca khoang trang)
    printf("Nhap vao mot chuoi: ");
    fgets(s, sizeof(s), stdin);

    // 2. Duyet tung ky tu trong chuoi
    for (int i = 0; i < strlen(s); i++) {
        char c = tolower(s[i]); // Chuyen ve chu thuong de de so sanh

        // Kiem tra xem ky tu do co phai la chu cai tu a-z hay khong
        if (isalpha(c)) {
            // Kiem tra nguyen am
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
                nguyenAm++;
            } else {
                // Neu la chu cai ma khong phai nguyen am thi la phu am
                phuAm++;
            }
        }
    }

    // 3. Xuat ket qua
    printf("---------------------------\n");
    printf("So luong nguyen am: %d\n", nguyenAm);
    printf("So luong phu am: %d\n", phuAm);

    return 0;
}