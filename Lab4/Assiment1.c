#include <stdio.h>
#include <math.h>
#include <string.h>

//Ham tu tao
int soNguyento();
int soNguyen();
int soChinhphuong(long long n);
int ucvaBcln(int a, int b);
    

int main() {
    int input;  
        printf("\n========================================\n");
        printf("MENU CHUONG TRINH ASSIGNMENT 1 - NGUYEN MINH NHAT - PS49618\n");
        printf("CHON CHUC NANG:\n");
        printf("1. Kiem tra so nguyen,son nguyen to, so chinh phuong\n");
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
                char nhap;
                printf("nhap a de chon chuc nang kiem tra so nguyen\n"
                        "nhap b de chon chuc nang kiem tra so nguyen to\n"
                        "nhap c de tim so chinh phuong\n");
                scanf(" %c",&nhap);
                

                    switch(nhap){
                            case 'a':
                                    soNguyen();
                                    break;
                            case 'b':
                                    soNguyento();
                                    break; 
                            case 'c':{
                                    long long a;
                                    printf("nhap vao 1 so: ");
                                    scanf("%lld",&a);

                                    while(a){
                                    
                                    if(soChinhphuong (a)){
                                        printf("%lld la so chinh phuong",a);
                                        break;
                                    }else{
                                        printf("khong phai la so chinh phuong: ");
                                        return 0;
                                    
                                    }
                    }
                                
                            }break;
          
              
                          
                    
        
                
                                    
            }case 2:{
                printf(" Ban da chon chuc nang 2: Tim UCLN va BCNN cua 2 so nguyen\n");
                int x,y;
                printf("nhap vao 2 so nguyen ");
                scanf("%d %d", &x, &y);
                ucln(x,y);
                
            }
                break;
            case 3:{
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
}


















int soNguyento() {
    int count = 0;
    int a;

    printf("nhap vao 1 so de tim so nguyen to\n");
    scanf("%d",&a);

    if (a < 2) {
        printf("%d khong phai la so nguyen to", a);
        return 0;
    }

    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        printf("%d la so nguyen to", a);
    } else {
        printf("%d khong phai la so nguyen to", a);
    }

    return 0;
}


int soNguyen()
    {
    double input;
    int i;
    printf("nhap vao 1 so de tim so nguyen \n");
    scanf("%lf",&input);

    if(input == (int)input){
        printf("%lf la so nguyen",input);
    }else{
        printf("%lf khong phai la so nguyen",input);
    }
    
}
        

int soChinhphuong(long long n){
    int can = sqrt(n);
    return (1ll*can*can==n);

}

int ucvaBcln(int a, int b){ // dung cong thuc Hệ thức giữa ƯCLN và BCNN" hoặc "Công thức nhân đảo ngược".
    
    while(b!=0){
        int r = a%b;
        
        a = b;
        b = r;
    }
    
    return a;
}
void ucln(int a, int b){
    
    int x = ucvaBcln(a,b);
    int y = (a*b)/x;

    printf("uoc chung lon nhat la: %d\n", x);
    printf("boi chunng nho nhat la: %d\n",y);
}