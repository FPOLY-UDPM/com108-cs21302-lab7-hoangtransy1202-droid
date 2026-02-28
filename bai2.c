/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

int main() {
    // 1. Thiết lập tài khoản mẫu (Tài khoản đúng)
    char user_dung[] = "admin";
    char pass_dung[] = "123456";

    // 2. Khai báo biến để người dùng nhập vào
    char user_nhap[50];
    char pass_nhap[50];

    printf("=== HE THONG DANG NHAP ===\n");

    // 3. Nhập Username
    printf("Username: ");
    scanf("%s", user_nhap); // Dung %s de nhap chuoi khong co khoang trang

    // 4. Nhập Password
    printf("Password: ");
    scanf("%s", pass_nhap);

    // 5. Kiểm tra thông tin
    // strcmp tra ve 0 neu hai chuoi giong het nhau
    if (strcmp(user_nhap, user_dung) == 0 && strcmp(pass_nhap, pass_dung) == 0) {
        printf("\n[OK] Dang nhap thanh cong! Chao mung quan tri vien.\n");
    } else {
        printf("\n[ERROR] Sai username hoac password. Dang nhap that bai!\n");
    }

    return 0;
}
