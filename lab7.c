#include <stdio.h>
#include <ctype.h>
#include <string.h>

void demChuCai();
void dangNhap();
void timKyTuLap();

int main()
{
    int input;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Dem nguyen am va phu am\n");
        printf("2. Dang nhap\n");
        printf("3. Tim ky tu lap\n");
        printf("0. Thoat\n");
        printf("Chon: ");
        scanf("%d", &input);

        getchar(); // xóa '\n' sau scanf

        switch (input)
        {
            case 1: demChuCai(); break;
            case 2: dangNhap(); break;
            case 3: timKyTuLap(); break;
            case 0: printf("Thoat!\n"); break;
            default: printf("Khong hop le!\n");
        }

    } while (input != 0);

    return 0;
}

// 1. Đếm nguyên âm & phụ âm

void demChuCai()
{
    char str[200];
    int nguyenAm = 0, phuAm = 0;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = tolower(str[i]);

        if (isalpha(c))
        {
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                nguyenAm++;
            else
                phuAm++;
        }
    }

    printf("Nguyen am: %d\n", nguyenAm);
    printf("Phu am: %d\n", phuAm);
}

// 2. Đăng nhập

void dangNhap()
{
    char user[30];
    char pass[30];
    char correctUser[] = "nhatdeptrai";
    char correctPass[] = "1106";

    printf("Nhap username: ");
    scanf("%s", user);

    printf("Nhap password: ");
    scanf("%s", pass);

    getchar(); // xóa '\n'

    if (strcmp(user, correctUser) == 0 && strcmp(pass, correctPass) == 0)
        printf("Dang nhap thanh cong!\n");
    else
        printf("Sai thong tin!\n");
}


// 3. Tìm ký tự xuất hiện 2 lần và >2 lần

void timKyTuLap()
{
    char str[200];
    int freq[256] = {0};

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    // Đếm số lần xuất hiện
    for (int i = 0; str[i] != '\0'; i++)
    {
        unsigned char c = str[i];
        freq[c]++;
    }

    printf("\nKy tu xuat hien DUNG 2 lan:\n");
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] == 2 && i != '\n')
            printf("'%c' : %d lan\n", i, freq[i]);
    }

    printf("\nKy tu xuat hien TREN 2 lan:\n");
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 2 && i != '\n')
            printf("'%c' : %d lan\n", i, freq[i]);
    }
}
