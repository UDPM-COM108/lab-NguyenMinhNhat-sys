#include <stdio.h>

void swap(int *a,int *b){
        int *temp;
        *temp = *a;
        *a=*b;
        *b = *temp;

}

int soLon(int a, int b, int c){
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int checkYears(int input){
    
    if(input % 4 == 0 || input % 400 == 0 || input % 100 != 0  ){
        printf("%d la nam nhuan", input);
    }else{
        printf("%d khong phai la nam nhuan", input);
    }
            
    return 0;
}
        
int main(){
    int input;
    printf("vui long chon chuc nang\n");
    printf("tim so lon nhat trong 3 so\n");
    printf("Tinh nam nhuan\n");
    printf("Hoan vi\n");
    scanf("%d",&input);
    

    switch(input){
        case 1:{
                int a, b, c;
                printf("Enter three numbers: ");
                scanf("%d %d %d", &a, &b, &c);

                printf("Gia tri lon nhat: %d\n", soLon(a, b, c));
        }case 2:{
            int input;
            printf("nhap vao so nam: ");
            scanf("%d", &input);
            checkYears(input);
        }case 3:{
            int a, b;
            printf("nhap vao 2 tham so");
            scanf("%d %d", &a, &b);

            swap(&a , &b);
            printf("Hoan vi");
            return 0;
        }

    }
}

