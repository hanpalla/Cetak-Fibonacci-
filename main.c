#include <stdio.h>

int main (){
    int awal, akhir, a=0, b=1, c=0, batas=0, flag=0;
    system("cls");
    printf("Input batas awal\t: ");
    scanf("%d",&awal);
    printf("Input batas akhir\t: ");
    scanf("%d",&akhir);

    printf("Bilangan Fibonacci diantara %d dan %d adalah: ",awal,akhir);

    if (a >= awal)
        printf("%d ",a);
    if (b >= awal)
        printf("%d ",b);

    while (batas<=akhir){
        c=a+b;
        
        if (c >= awal && c <= akhir){
            printf("%d ",c);
            flag += 1;
        }
        batas=c;
        a=b;
        b=c;
    }

    if (flag == 0)
        printf("Tidak ada");

    return 0;
}
