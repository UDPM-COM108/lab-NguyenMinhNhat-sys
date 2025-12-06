#include <stdio.h>
#include <math.h>

// Khai báo các hàm
void enterArray(int array[], int n);
void printArray(int array[], int n);
int sumArray(int array[], int n);
void minMaxArray(int array[], int n);
int isPrime(int num);
void analyzeArray(int array[], int n);

int main() {
    int n;
    int array[100]; // Giới hạn mảng tối đa 100 phần tử

    // Nhập số lượng phần tử
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    // Nhập các phần tử
    enterArray(array, n);

    // In mảng
    printArray(array, n);

    // Tính tổng các phần tử
    printf("Tong tat ca phan tu trong mang la: %d\n", sumArray(array, n));

    // Tìm min và max
    minMaxArray(array, n);

    // Phân tích: đếm số nguyên tố & tính trung bình các số chia hết cho 3
    analyzeArray(array, n);

    return 0;
}

// Hàm nhập mảng
void enterArray(int array[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

// Hàm in mảng
void printArray(int array[], int n) {
    int i;
    printf("Mang hien tai: ");
    for(i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Tính tổng mảng
int sumArray(int array[], int n) {
    int sum = 0;
    int i;
    for(i = 0; i < n; i++) {
        sum += array[i];
    }
    return sum;
}

// Tìm min và max
void minMaxArray(int array[], int n) {
    int min = array[0], max = array[0];
    int i;
    for(i = 1; i < n; i++) {
        if(array[i] < min) min = array[i];
        if(array[i] > max) max = array[i];
    }
    printf("Gia tri nho nhat: %d\n", min);
    printf("Gia tri lon nhat: %d\n", max);
}

// Kiểm tra số nguyên tố
int isPrime(int num) {
    if(num < 2) return 0;
    int i;
    for(i = 2; i <= sqrt(num); i++) {
        if(num % i == 0) return 0;
    }
    return 1;
}

// Phân tích mảng
void analyzeArray(int array[], int n) {
    int primeCount = 0;
    int sumDiv3 = 0;
    int countDiv3 = 0;
    int i;

    for(i = 0; i < n; i++) {
        if(isPrime(array[i])) primeCount++;
        if(array[i] % 3 == 0) {
            sumDiv3 += array[i];
            countDiv3++;
        }
    }

    printf("So luong so nguyen to trong mang: %d\n", primeCount);

    if(countDiv3 > 0)
        printf("Trung binh cong cac so chia het cho 3: %.2f\n", (float)sumDiv3 / countDiv3);
    else
        printf("Khong co so nao chia het cho 3 trong mang.\n");
}
