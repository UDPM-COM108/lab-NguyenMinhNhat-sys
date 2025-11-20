#include <stdio.h>

int main() {
    int input;
        printf("\n========================================\n");
        printf("MENU CHUONG TRINH ASSIGNMENT 1 - NGUYEN MINH NHAT - PS49618\n");
        printf("CHON CHUC NANG:\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim uoc so chung va boi chung cua 2 so\n");
        printf("3. Chuong trinh tinh tien cho quan Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Tinh lai xuat vay ngan hang, vay tra gop\n");
        printf("7. Vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Chuong trinh tinh toan phan so\n");
        printf("0. Thoat chuong trinh\n");
        printf("========================================\n");
        printf("Nhap lua chon: ");
        scanf("%d", &input);
        
        switch(input){
            case 1:{
                printf("Ban da chon chuc nang 1: Kiem tra so nguyen\n");
                break;
            }case 2:{
                printf(" Ban da chon chuc nang 2: Tim UCLN va BCNN\n");
                break;
            }case 3:{
                printf(" Ban da chon chuc nang 3: Tinh tien Karaoke\n");              
                break;
            }case 4:{
                printf("Ban da chon chuc nang 4: Tinh tien dien\n");
                break;
            }case 5:{
                printf("Ban da chon chuc nang 5: Doi tien\n");
                break;
            }case 6:{
                printf("Ban da chon chuc nang 6: Tinh lai xuat vay ngan hang\n");
                break;
            }case 7:{
                printf("Ban da chon chuc nang 7: Vay tien mua xe\n");
                break;
            }case 8:{
                printf("Ban da chon chuc nang 8: Sap xep thong tin sinh vien\n");
                break;
            }case 9:{
                printf("Ban da chon chuc nang 9: Game FPOLY-LOTT\n");
                break;
            }case 10:{
                printf("Ban da chon chuc nang 10: Tinh toan phan so\n");
                break;
            }case 0:{
                printf("Ban da thoat chuong trinh.\n");
                break;
            default:{
                printf(" Lua chon khong hop le, vui long nhap lai!\n");
                break;
            }
        }
    while(input != 0);
    return 0;
}
}