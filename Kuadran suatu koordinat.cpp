#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y;
    printf("Mengetahui Kuadran Suatu Koordinat\n\n");
    printf("Masukkan koordinat x : ");
    scanf("%i",&x);
    printf("Masukkan koordinat y : ");
    scanf("%i",&y);

    if(x>0 && y>0)
        printf("Kuadran I");
    if(x>0 && y<0)
        printf("Kuadran II");
    if(x<0 && y<0)
        printf("Kuadran III");
    if(x<0 && y>0)
        printf("Kuadran IV");
    if(x==0 && y==0)
        printf("Titik Pusat");
getch();
}
