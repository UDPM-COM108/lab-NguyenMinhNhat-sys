
/*#include <stdio.h> //Nguyen Minh Nhat PS49618//
#include <math.h>
int main (){

    int input;
    printf("menu chuong trinh cua nhat\n");
    printf("1.tinh hoc luc: \n");
    printf("2.giai phuong trinh bac 1:\n");
    printf("3.giai phuong trinh bac 2:\n");
    printf("4.ban cuu chuong:\n");
    scanf("%d", &input);


    do{
    switch(input){
        case 1:{
            float dtb;
            printf("nhap vao diem trung binh: ");
            scanf("%f", &dtb);
                            if(dtb >= 9){
                        printf("Hoc luc xuat sac", dtb);
                            } else if(dtb >=8 && dtb < 9 ){
                        printf("hoc luc gioi");
                            } else if (dtb >=6.5 && dtb <8){
                        printf(" hoc luc kha: ");
                            }   else if ( dtb >=5 && dtb < 6.5){
                        printf(" hoc luc trung binh");
                            } else
                        printf ("hoc luc yeu");
                        
                }
                        break;

        case 2:{
            float a,b;
            printf(" nhap vao gia tri cua a truoc b sau: ");
            scanf("%f %f", &a,&b);

            if (a != 0) {
                printf("phuong trinh co nghiem x = %.2f\n", -b/a);
            } else if ( b != 0 ){
                printf("phuong trinh vo nghiem: ");
            }  else 
                printf("phuong trinh vo so nghiem: ");

        }
                        break;
        case 3:{
            double a,b,c, delta,x1,x2;
            printf("nhap vao a,b,c theo thu tu: ");
            scanf("%f", &a,&b,&c);

            delta =b*b - 4*a*c;

                if (a == 0 ){
                    printf("phuong trinh thanh: bx + c = 0");
                }else if (delta < 0){
                    printf("phuong trinh vo nghiem: ");
                }else if(delta == 0){
                    x1 = -b/(2*a);
                    printf("phuong trinh co nghiem kem %2.lf: ", x1);
                }else
                    x1 = (-b + sqrt(delta))/(2*a);
                    x2 = (-b - sqrt(delta))/(2*a);
                    printf("phuong trinh co 2 nghiem rieng biet:  %.2lf",x1,x2);
            
                return 0;        
                }
                        break;
            }

            }while(input > 5);
        return 0; 
    
}*/ 