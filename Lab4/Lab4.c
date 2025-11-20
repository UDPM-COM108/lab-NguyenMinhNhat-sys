


#include <stdio.h>
   void nhiPhan(int x){
        if(x==0)
            return;
        else{
            int r = x%2;
            nhiPhan(x/2);
            printf("%d", r);

        }  
   }
        
    
    int checkScp(){
        int x;
        int y = 0;
    
        printf("nhap vao 1 so de xac dinh so chinh phuong: ");
        scanf("%d", &x);

        for(int i = 1; i<=x; i++){
            if(i*i==x){
                printf("%d la so chinh phuong: ", x);
                break;
            }

        } printf("%d khong phai la so chinh phuong", x);

}
    
    int checkSochiahetcho2(){
        int min,max;
        printf("nhap vao min va max: ");
        scanf("%d %d", &min,&max);

        float tong = 0;
        int dem = 0;
        float trungBinhTong;

        
        
        for (int i = min; i                                                                                                                                                                                                                                                                                                                                                                                                     <= max; i++){
            if(i%2 ==0){
                printf("cac so chia het cho 2: %d\n", i);
                tong += i;
                dem++;
                
            }
                
        }
        printf("tong cac so la: %1.f\n", tong);
        trungBinhTong = tong / dem;
        printf("trungBinhTong la: %1.f", trungBinhTong);
    
    }

    int checkSnt(){
        int count;
        int x;
        printf("nhap vao 1 so de xac dinh so nguyen to: ");
        scanf("%d", &x);

        for(int i =2; i<=x; i++){
            if(i % x == 0){
                count++;
            }
        }

        if(count == 0){
            printf("%x la so nguyen to ",x);
        }else
            printf("%d khong phai la so nguyen to", x);
}
    
    



    int main(){

        int n;
        int input;
        printf("chon 1 so\n");
        printf("1. so tu nhien chia het cho 2\n");
        printf("2.xac dinh so nguyen to\n");
        printf("3. xac dinh so chinh phuong\n");
        printf("4. thap phan sang nhi phan\n");
        scanf("%d", &input);

        switch(input){
            case 4:
                do{
                    printf("nhap vao 1 so: ");
                    scanf("%d",&n);
                }while(n<0);
                    nhiPhan(n);
                    break;
            case 3:
                checkScp();
                    break;
            case 2:
                checkSnt();
                    break;
            case 1:
                checkSochiahetcho2();
            default:
                printf("nhap sai");
            
        return 0;
        }
    }